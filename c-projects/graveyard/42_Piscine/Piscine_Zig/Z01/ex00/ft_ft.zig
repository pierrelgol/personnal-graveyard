const std = @import("std");
const print = std.debug.print;
const except = std.testing.expect;

fn ft_ft(nbr: *i32) void {
    nbr.* = 42;
}

test "ft_ft_true" {
    var nbr: i32 = 0;
    ft_ft(&nbr);
    try except(nbr == 42);
}

test "ft_ft_false" {
    var nbr: i32 = 0;
    ft_ft(&nbr);
    try except(nbr != 0);
}
