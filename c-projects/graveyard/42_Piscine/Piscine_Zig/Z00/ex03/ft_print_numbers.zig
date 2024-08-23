const std = @import("std");

fn ft_print_numbers() void {
    var nb: u8 = '0';
    while (nb <= '9') : (nb += 1) {
        std.debug.print("{c}", .{nb});
    }
}

test "ft_print_numbers" {
    ft_print_numbers();
}
