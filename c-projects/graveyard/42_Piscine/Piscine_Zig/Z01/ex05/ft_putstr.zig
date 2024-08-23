const std = @import("std");
const expect = @import("std").testing.expect;

fn ft_putstr(str: []const u8) !void {
    var stdout = std.io.getStdOut();
    _ = try stdout.write(str);
}

test "test_str" {
    const str = "this is a test";
    try ft_putstr(str);
}

pub fn main() !void {
    const str = "this is a test";
    try ft_putstr(str);
}
