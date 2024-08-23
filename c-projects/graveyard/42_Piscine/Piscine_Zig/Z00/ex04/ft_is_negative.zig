const std = @import("std");

fn ft_is_negative(n: i32) void {
    if (n < 0) {
        std.debug.print("N", .{});
    } else {
        std.debug.print("P", .{});
    }
}

test "ft_is_negative" {
    ft_is_negative(1337);
    ft_is_negative(-42);
}
