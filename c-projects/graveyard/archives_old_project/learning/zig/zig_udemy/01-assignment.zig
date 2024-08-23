const std = @import("std");

// const = value is imutable
// var - value is mutable

const constant: i32 = 5;
var variables: u32 = 4444;

const inferred_constant = @as(i64, 3333);
var inferred_var = @as(u64, 43333);

pub fn main() void {
    std.debug.print("constant = {d}\nvariables = {d}\n", .{ constant, variables });
    std.debug.print("infered_constant = {d}\ninfered_variables = {d}\n", .{ inferred_constant, inferred_var });
}
