const std = @import("std");

const targets: []const std.Target.Query = &.{
    .{ .cpu_arch = .x86_64, .os_tag = .linux, .abi = .gnu },
    .{ .cpu_arch = .x86_64, .os_tag = .linux, .abi = .musl },
    // .{ .cpu_arch = .aarch64, .os_tag = .macos },
    // .{ .cpu_arch = .aarch64, .os_tag = .linux },
    // .{ .cpu_arch = .x86_64, .os_tag = .windows },
};

pub fn build(b: *std.Build) !void {
    const optimize = b.standardOptimizeOption(.{});

    for (targets) |t| {
        const exe = b.addExecutable(.{
            .name = "minishell-fuzzer",
            .root_source_file = b.path("src/main.zig"),
            .target = b.resolveTargetQuery(t),
            .optimize = optimize,
        });

        const target_output = b.addInstallArtifact(exe, .{
            .dest_dir = .{
                .override = .{
                    .custom = try t.zigTriple(b.allocator),
                },
            },
        });
        b.getInstallStep().dependOn(&target_output.step);
    }
}
