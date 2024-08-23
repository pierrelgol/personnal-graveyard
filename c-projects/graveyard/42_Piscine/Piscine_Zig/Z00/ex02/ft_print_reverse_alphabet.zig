const std = @import("std");

fn ft_print_reverse_alphabet() void {
    var ch: u8 = 'z';
    while (ch >= 'a') : (ch -= 1) {
        std.debug.print("{c}", .{ch});
    }
}

test "ft_print_reverse_alphabet" {
    ft_print_reverse_alphabet();
}
