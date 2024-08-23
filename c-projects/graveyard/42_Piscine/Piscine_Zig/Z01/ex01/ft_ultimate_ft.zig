const std = @import("std");
const print = std.debug.print;
const assert = std.testing.expect;

fn ft_ultimate_ft(nbr: *********i32) void {
    nbr.*.*.*.*.*.*.*.*.* = 42;
}

test "ft_ultimate_ft" {
    var nbr: i32 = 0;
    var nbr1 = &nbr;
    var nbr2 = &nbr1;
    var nbr3 = &nbr2;
    var nbr4 = &nbr3;
    var nbr5 = &nbr4;
    var nbr6 = &nbr5;
    var nbr7 = &nbr6;
    var nbr8 = &nbr7;
    var nbr9 = &nbr8;
    ft_ultimate_ft(nbr9);
    try assert(nbr == 42);
}
