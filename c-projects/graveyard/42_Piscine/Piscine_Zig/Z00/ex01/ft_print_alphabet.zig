const std = @import("std");

fn ft_print_alphabet() void {
    var i: u8 = 'a';
    while (i <= 'z') : (i += 1) {
        std.debug.print("{c}", .{i});
    }
}

test "ft_print_alphabet()" {
    ft_print_alphabet();
}
