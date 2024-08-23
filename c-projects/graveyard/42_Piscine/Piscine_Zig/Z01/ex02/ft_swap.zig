const std = @import("std");

fn ft_swap(a: *i32, b: *i32) void {
    var temp: i32 = a.*;
    a.* = b.*;
    b.* = temp;
}

test "ft_swap test for swap" {
    var a: i32 = 10;
    var b: i32 = 5;
    ft_swap(&a, &b);
    try std.testing.expect(a == 5);
    try std.testing.expect(b == 10);
}
