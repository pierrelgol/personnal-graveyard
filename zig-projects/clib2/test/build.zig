const std = @import("std");
const mem = std.mem.Allocator

const c_source_files = [_][]const u8{
    "../source/allocator/mem_node1.c",
    "../source/allocator/mem_node2.c",
    "../source/allocator/mem_node3.c",
    "../source/memory/memory.c",
    "../source/misc/helpers.c",
};

const flags = [_][]const u8{
    "-Wall",
    "-Werror",
    "-Wextra",
};

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    const lib = b.addStaticLibrary(.{
        .name = "clib2",
        .root_source_file = b.path("src/clib.zig"),
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });
    lib.addIncludePath(.{ .path = "../include/" });
    b.installArtifact(lib);

    const exe = b.addExecutable(.{
        .name = "clib2",
        .root_source_file = b.path("src/main.zig"),
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });
    exe.addIncludePath(.{ .path = "../include/" });
    b.installArtifact(exe);

    const run_cmd = b.addRunArtifact(exe);
    run_cmd.step.dependOn(b.getInstallStep());

    if (b.args) |args| {
        run_cmd.addArgs(args);
    }

    const run_step = b.step("run", "Run the app");
    run_step.dependOn(&run_cmd.step);

    const lib_unit_tests = b.addTest(.{
        .root_source_file = b.path("src/clib.zig"),
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });
    lib_unit_tests.addIncludePath(.{ .path = "../include/" });

    const run_lib_unit_tests = b.addRunArtifact(lib_unit_tests);

    const exe_unit_tests = b.addTest(.{
        .root_source_file = b.path("src/main.zig"),
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });
    exe_unit_tests.addIncludePath(.{ .path = "../include/" });

    for (c_source_files) |files| {
        lib.addCSourceFile(.{ .file = .{ .path = files }, .flags = &flags });
        exe.addCSourceFile(.{ .file = .{ .path = files }, .flags = &flags });
        exe_unit_tests.addCSourceFile(.{ .file = .{ .path = files }, .flags = &flags });
        lib_unit_tests.addCSourceFile(.{ .file = .{ .path = files }, .flags = &flags });
    }

    const run_exe_unit_tests = b.addRunArtifact(exe_unit_tests);

    const test_step = b.step("test", "Run unit tests");
    test_step.dependOn(&run_lib_unit_tests.step);
    test_step.dependOn(&run_exe_unit_tests.step);
}
