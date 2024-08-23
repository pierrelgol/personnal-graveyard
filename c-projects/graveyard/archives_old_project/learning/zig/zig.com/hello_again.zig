const std = @import("std");
const print = @import("std").debug.print;
const expect = std.testing.expect;

test "This is a test2" {
    const x = 5;
    const y = 5;
    try expect(x == y);
}

pub fn main() void {
    print("Hello, world!\n", .{});
    for (0..100) |value| {
        print("{}, ", .{value});
    }
}
