const std = @import("std");

pub fn main() void {
    const array1 = [5]u8{ 'h', 'e', 'l', 'l', 'o' };
    const array2 = [_]u8{ 'w', 'o', 'r', 'l', 'd' };

    std.debug.print("Length of array1 = {}\n", .{array1.len});
    std.debug.print("Length of array2 = {}\n", .{array2.len});
}
