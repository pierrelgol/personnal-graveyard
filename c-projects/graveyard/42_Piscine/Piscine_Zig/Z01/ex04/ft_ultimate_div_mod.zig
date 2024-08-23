const std = @import("std");
const expect = @import("std").testing.expect;

fn ft_ultimate_div_mod(a: *i32, b: *i32) void {
    if (b.* != 0) {
        var div: i32 = @divTrunc(a.*, b.*);
        var mod: i32 = @rem(a.*, b.*);
        a.* = div;
        b.* = mod;
    }
}

test "test div_mod normal" {
    var a: i32 = 10;
    var b: i32 = 2;
    ft_ultimate_div_mod(&a, &b);
    try expect(a == 5);
    try expect(b == 0);
}

test "test div_mod zero" {
    var a: i32 = 10;
    var b: i32 = 0;
    ft_ultimate_div_mod(&a, &b);
    try expect(a == 10);
    try expect(b == 0);
}
