const std = @import("std");
const expect = @import("std").testing.expect;

fn ft_div_mod(a: i32, b: i32, div: *i32, mod: *i32) void {
    if (b != 0) {
        div.* = @divTrunc(a, b);
        mod.* = @rem(a, b);
    }
}

test "ft_div_mod_normal" {
    var a: i32 = 10;
    var b: i32 = 2;
    ft_div_mod(a, b, &a, &b);
    try expect(a == 5);
    try expect(b == 0);
}

test "ft_div_mod_divide_by_zero" {
    var a: i32 = 10;
    var b: i32 = 0;
    ft_div_mod(a, b, &a, &b);
    try expect(a == 10);
    try expect(b == 0);
}
