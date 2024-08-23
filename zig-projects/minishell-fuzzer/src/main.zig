const std = @import("std");

pub const HELP_MESSAGE: []const u8 =
    \\                    Minishell-Fuzzer
    \\                                    
    \\    Description :                                
    \\                                    
    \\    Fuzzy testing, also known as fuzzing is a software testing techinque
    \\    that involves providing invalid, unexpected or random data as inputs
    \\    to a computer program. The goal is to identify errors, vulnerabilites,
    \\    and crashes.
    \\    
    \\    Minishell-Fuzzer is a small program designed to be able to                                
    \\    test the parsing capabilites of your minishell implementation.
    \\    it is not a tester, simply a tool that will improve your ability
    \\    to test your implementation. The way it works is simple, you provide
    \\    the absolute path to your executable, a set of options, and mshfuzz
    \\    will launch your minishell and input random series of commands into it
    \\                                    
    \\    Usage :                                
    \\    
    \\    $> mshfuzz [absolute_path_to_minishell] [options]
    \\    $> mfhfuzz $HOME/workspace/42/minishell -n 5 -l 10
    \\
    \\    Options :
    \\
    \\    -h    : void :     print help message.
    \\    -n    : i32  :     number_of input line to send to minishell.
    \\    -l    : i32  :     max length of commands per input line.
;

pub const commands = [_][]const u8{
    "echo 'Hello World'",
    "ls -l",
    "ls -a",
    "cd /path/to/directory",
    "pwd",
    "cd",
    "env",
    "unset",
    "export",
    "pwd",
    "exit",
    "cp -r source destination",
    "mv source destination",
    "rm -rf $HOME/path/to/directory",
    "mkdir -p /path/to/directory",
    "rmdir $HOME/path/to/directory",
    "touch file.txt",
    "cat file.txt",
    "more file.txt",
    "less file.txt",
    "export COLOR=BLUE",
    "head -n 10 file.txt",
    "tail -n 10 file.txt",
    "grep 'pattern' file.txt",
    "find /path -name file.txt",
    "chmod 755 file.txt",
    "chown user:group file.txt",
    "ps aux",
    "kill -9 pid",
    "top",
    "df -h",
    "du -sh /path",
    "tar -czvf archive.tar.gz /path/to/directory",
    "gzip file.txt",
    "gunzip file.txt.gz",
    "zip -r archive.zip /path/to/directory",
    "unzip archive.zip",
    "ssh user@host",
    "scp user@host:/path/to/file /local/path",
    "wget http://example.com/file",
    "curl -O http://example.com/file",
    "man vim",
    "history",
    "alias ll='ls -l'",
    "nano file.txt",
    "vim file.txt",
    "awk '/pattern/ {print $0}' file.txt",
    "sed 's/foo/bar/g' file.txt",
    "sort file.txt",
    "uniq file.txt",
    "diff file1 file2",
    "export VAR=test",
    "echo $VAR",
    "env",
    "source file.txt",
    "which ls",
    "basename /path/to/file",
    "dirname /path/to/file",
    "xargs command",
};

pub const pipes = [_][]const u8{"|"};
pub const redir = [_][]const u8{
    ">",
    ">>",
    "<<",
    "<",
};

pub const separator = pipes ++ redir;

pub fn MinishellFuzzer() type {
    return struct {
        const Self = @This();
        rand: std.Random.DefaultPrng,
        allocator: std.mem.Allocator,
        args_iter: std.process.ArgIterator,
        child_cmd_buffer: std.ArrayList(u8),
        child_path: []u8,
        child_argv: std.ArrayList([]const u8),
        child_cmd_count: usize,
        child_cmd_length: usize,

        pub fn init(allocator: std.mem.Allocator) !Self {
            return Self{
                .allocator = allocator,
                .rand = std.Random.DefaultPrng.init(@intCast(std.time.timestamp())),
                .args_iter = try std.process.argsWithAllocator(allocator),
                .child_argv = std.ArrayList([]const u8).init(allocator),
                .child_path = undefined,
                .child_cmd_buffer = std.ArrayList(u8).init(allocator),
                .child_cmd_count = 0,
                .child_cmd_length = 0,
            };
        }

        pub fn deinit(self: *Self) void {
            self.*.args_iter.deinit();
            self.*.child_cmd_buffer.deinit();
            self.*.child_argv.deinit();
        }

        pub fn putDefaultConfig(self: *Self) bool {
            self.*.child_cmd_count = 1;
            self.*.child_cmd_length = 2;
            return (true);
        }

        pub fn parse(self: *Self) bool {
            var it = self.args_iter;
            if (it.skip() == false)
                return (false);
            var arg = it.next() orelse return false;
            if (std.mem.startsWith(u8, arg, "/")) {
                self.*.child_path = @constCast(@ptrCast(arg));
            } else {
                return (false);
            }

            arg = it.next() orelse return putDefaultConfig(self);
            if (std.mem.eql(u8, arg, "-n")) {
                const number = it.next() orelse return (false);
                self.*.child_cmd_count = std.fmt.parseInt(usize, number, 10) catch 1;
            }

            arg = it.next() orelse return putDefaultConfig(self);
            if (std.mem.eql(u8, arg, "-l")) {
                const number = it.next() orelse return (false);
                self.*.child_cmd_length = std.fmt.parseInt(usize, number, 10) catch 5;
            }
            return (true);
        }

        pub fn putRandomElem(self: *Self, index: usize) !void {
            var idx = self.rand.next() % commands.len;
            try self.*.child_cmd_buffer.appendSlice(commands[idx]);
            if (index + 1 > self.child_cmd_length) {
                try self.*.child_cmd_buffer.appendSlice("");
                return;
            }
            try self.*.child_cmd_buffer.appendSlice(" ");
            idx = self.rand.next() % separator.len;
            try self.*.child_cmd_buffer.appendSlice(separator[idx]);
            try self.*.child_cmd_buffer.appendSlice(" ");
        }

        pub fn build(self: *Self) !bool {
            try self.child_argv.append(self.child_path);
            for (0..self.child_cmd_count) |i| {
                if (i == 31)
                    break;
                for (0..self.child_cmd_length) |j| {
                    try putRandomElem(self, j);
                }
                try self.child_argv.append(self.child_cmd_buffer.items);
                self.child_cmd_buffer.clearRetainingCapacity();
            }
            return (true);
        }

        pub fn run(self: Self) !bool {
            var child = std.process.Child.init(self.child_argv.items, self.allocator);
            const handle = try child.spawnAndWait();
            return (handle.Exited == 0);
        }

        pub fn printHelp(_: Self) void {
            const stdout_handle = std.io.getStdOut();
            defer stdout_handle.close();
            const stdout = stdout_handle.writer();
            stdout.print("{s}\n", .{HELP_MESSAGE}) catch unreachable;
        }
    };
}

pub fn main() !void {
    var gpa = std.heap.GeneralPurposeAllocator(.{}){};
    defer {
        if (gpa.detectLeaks())
            @panic("Leaks detected!\n");
        _ = gpa.deinit();
    }
    const allocator = gpa.allocator();
    var fuzzer = try MinishellFuzzer().init(allocator);
    defer fuzzer.deinit();

    if (fuzzer.parse()) {
        if (try fuzzer.build()) {
            if (try fuzzer.run()) {
                std.process.exit(0);
            } else {
                std.process.exit(1);
            }
        } else {
            fuzzer.printHelp();
        }
    } else {
        fuzzer.printHelp();
    }
}
