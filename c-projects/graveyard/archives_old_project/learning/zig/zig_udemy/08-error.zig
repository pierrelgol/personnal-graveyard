const std = @import("std");
const expect = @import("std").testing.expect;

const file_open_error = error{
    access_denied,
    out_of_memory,
    file_not_found,
};

const allocation_error = error{out_of_memory};

test "coerce error from subset to a superset" {
    const err: file_open_error = allocation_error.out_of_memory;

    try expect(err == file_open_error.out_of_memory);
}

test "error union" {
    const maybe_error: allocation_error!u16 = 10;
    const no_error = maybe_error catch 0;

    try expect(@TypeOf(no_error) == u16);
    try expect(no_error == 10);
}

fn failing_function() error{Oops}!void {
    return error.Oops;
}

test "returning an error" {
    failing_function() catch |err| {
        try expect(err == error.Oops);
    };
}

fn failing_func() error{Oops}!i32 {
    try failing_function();

    return 12;
}

test "try test" {
    var v = failing_func() catch |err| {
        try expect(err == error.Oops);
        return;
    };

    try expect(@TypeOf(v) == i32);
    try expect(v == 12);
}

var problems: u32 = 99;

fn failing_func_counter() error{Oops}!void {
    errdefer problems += 1;
    try failing_function();
}

test "errdefer" {
    failing_func_counter() catch |err| {
        try expect(err == error.Oops);
        try expect(problems == 100);
        return;
    };
}
