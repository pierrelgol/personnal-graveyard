const std = @import("std");
const log = @import("std").log;
const exp = @import("std").testing.expect;

pub fn main() void {
    // var integer = [_]u32{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    var string = [_]u8{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

    for (string) |character| {
        std.log.info("Character: {}\n", .{character});
    }
    std.log.info("{s}",.{""});

    // multi-objects for loops are introduced in zig 0.11.0
    for (string, 0..) |ch, index| {
        std.log.err("string: {}", .{ch});
        std.log.info("integer: {}", .{index});
    }
    std.log.info("{s}",.{"\n"});


    for (string[0..10]) |index| {
        std.log.info("string: {}", .{index});
    }
    std.log.info("{s}",.{""});
}
