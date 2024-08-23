const std = @import("std");
const testing = std.testing;
const expect = std.testing.expect;
const clib = @cImport({
    @cInclude("clib.h");
});

const MemNode = extern struct {
    next: ?*MemNode,
    size: usize,
    used: usize,
    block: ?[*]c_char,

    pub fn create(size: usize) !*MemNode {
        return @as(?*MemNode, @ptrCast(clib.mem_node_create(size))) orelse std.mem.Allocator.Error.OutOfMemory;
    }

    pub fn destroy(self: *MemNode) void {
        _ = clib.mem_node_destroy(@as([*c]clib.t_mem_node, @alignCast(@ptrCast(self))));
    }

    pub fn getNchild(self: *MemNode, n: usize) ?*MemNode {
        return @as(?*MemNode, @ptrCast(clib.mem_node_get_nchild(@ptrCast(self), n)));
    }

    pub fn nextOrNull(self: *MemNode) ?*MemNode {
        return @as(?*MemNode, @ptrCast(clib.mem_node_next_or_null(@ptrCast(self))));
    }

    pub fn containsSpace(self: *MemNode, required: usize) bool {
        return (clib.mem_node_contains_space(@ptrCast(self), required));
    }

    pub fn containsPtr(self: *MemNode, addr: usize) bool {
        return (clib.mem_node_contains_ptr(@ptrCast(self), addr));
    }

    pub fn insertChild(self: *MemNode, child: *MemNode) void {
        clib.mem_node_insert_child(@ptrCast(self), @ptrCast(child));
    }

    pub fn removeChild(self: *MemNode) ?*MemNode {
        return @as(?*MemNode, @ptrCast(clib.mem_node_remove_child(@ptrCast(self))));
    }

    pub fn countChild(self: *MemNode) usize {
        return (clib.mem_node_count_child(@ptrCast(self)));
    }

    pub fn removeSuitable(self: **MemNode, required: usize) ?*MemNode {
        return @as(?*MemNode, @ptrCast(clib.mem_node_remove_suitable(@ptrCast(self), required)));
    }

    pub fn removeMatching(self: **MemNode, addr: usize) ?*MemNode {
        return @as(?*MemNode, @ptrCast(clib.mem_node_remove_matching(@ptrCast(self), addr)));
    }
};

test "MemNode.create()                         : ptr" {
    const node = try MemNode.create(32);
    defer node.destroy();

    try expect(node.next == null);
    try expect(node.size == 32);
    try expect(node.used == 0);
    try expect(node.block != null);
}

test "MemNode.getNchild()                      : ptr" {
    const node1: *MemNode = try MemNode.create(1);
    defer node1.destroy();
    const node2: *MemNode = try MemNode.create(2);
    defer node2.destroy();
    const node3: *MemNode = try MemNode.create(3);
    defer node3.destroy();
    const node4: *MemNode = try MemNode.create(4);
    defer node4.destroy();

    node1.next = node2;
    node2.next = node3;
    node3.next = node4;

    {
        const result = node1.getNchild(1) orelse unreachable;
        try expect(result.size == 2);
    }

    {
        const result = node2.getNchild(1) orelse unreachable;
        try expect(result.size == 3);
    }

    {
        const result = node3.getNchild(1) orelse unreachable;
        try expect(result.size == 4);
    }

    {
        const result = node1.getNchild(3) orelse unreachable;
        try expect(result.size == 4);
    }

    {
        const result = node1.getNchild(0) orelse unreachable;
        try expect(result.size == 1);
    }
}

test "MemNode.nextOrNull()                     : ptr" {
    const node1: *MemNode = try MemNode.create(1);
    defer node1.destroy();
    const node2: *MemNode = try MemNode.create(2);
    defer node2.destroy();
    const node3: *MemNode = try MemNode.create(3);
    defer node3.destroy();
    const node4: *MemNode = try MemNode.create(4);
    defer node4.destroy();

    node1.next = node2;
    node2.next = node3;
    node3.next = node4;

    {
        const result = node1.nextOrNull() orelse unreachable;
        try expect(result.size == 2);
    }

    {
        const result = node2.nextOrNull() orelse unreachable;
        try expect(result.size == 3);
    }

    {
        const result = node3.nextOrNull() orelse unreachable;
        try expect(result.size == 4);
    }

    {
        const result = node4.nextOrNull();
        try expect(result == null);
    }
}

test "MemNode.containsSpace()                  : bool" {
    const node1: *MemNode = try MemNode.create(4);
    defer node1.destroy();
    const node2: *MemNode = try MemNode.create(8);
    defer node2.destroy();
    const node3: *MemNode = try MemNode.create(32);
    defer node3.destroy();
    const node4: *MemNode = try MemNode.create(64);
    defer node4.destroy();

    node1.next = node2;
    node2.next = node3;
    node3.next = node4;

    {
        for (0..node1.size) |request| {
            const result = node1.containsSpace(request);
            try expect(result == true);
        }
    }

    {
        for (0..node2.size) |request| {
            const result = node2.containsSpace(request);
            try expect(result == true);
        }
    }

    {
        for (0..node3.size) |request| {
            const result = node3.containsSpace(request);
            try expect(result == true);
        }
    }

    {
        for (0..node4.size) |request| {
            const result = node4.containsSpace(request);
            try expect(result == true);
        }
    }
}

test "MemNode.containsPtr()                  : bool" {
    const node1: *MemNode = try MemNode.create(4);
    defer node1.destroy();
    const node2: *MemNode = try MemNode.create(8);
    defer node2.destroy();
    const node3: *MemNode = try MemNode.create(32);
    defer node3.destroy();
    const node4: *MemNode = try MemNode.create(64);
    defer node4.destroy();

    node1.next = node2;
    node2.next = node3;
    node3.next = node4;

    {
        const request = @intFromPtr(node1.block.?);
        const result = node1.containsPtr(request);
        try expect(result == true);
    }

    {
        const request = @intFromPtr(node2.block.?);
        const result = node2.containsPtr(request);
        try expect(result == true);
    }

    {
        const request = @intFromPtr(node3.block.?);
        const result = node3.containsPtr(request);
        try expect(result == true);
    }

    {
        const request = @intFromPtr(node4.block.?);
        const result = node4.containsPtr(request);
        try expect(result == true);
    }
}

test "MemNode.insertChild()                    : void" {
    const node1: *MemNode = try MemNode.create(1);
    defer node1.destroy();
    const node2: *MemNode = try MemNode.create(2);
    defer node2.destroy();
    const node3: *MemNode = try MemNode.create(3);
    defer node3.destroy();
    const node4: *MemNode = try MemNode.create(4);
    defer node4.destroy();

    node1.insertChild(node2);
    node2.insertChild(node3);
    node3.insertChild(node4);

    {
        const result = node1.getNchild(1) orelse unreachable;
        try expect(result.size == 2);
    }

    {
        const result = node2.getNchild(1) orelse unreachable;
        try expect(result.size == 3);
    }

    {
        const result = node3.getNchild(1) orelse unreachable;
        try expect(result.size == 4);
    }

    {
        const result = node1.getNchild(3) orelse unreachable;
        try expect(result.size == 4);
    }

    {
        const result = node1.getNchild(0) orelse unreachable;
        try expect(result.size == 1);
    }
}

test "MemNode.removeChild()                    : void" {
    const node1: *MemNode = try MemNode.create(1);
    defer node1.destroy();
    const node2: *MemNode = try MemNode.create(2);
    defer node2.destroy();
    const node3: *MemNode = try MemNode.create(3);
    defer node3.destroy();
    const node4: *MemNode = try MemNode.create(4);
    defer node4.destroy();

    node1.insertChild(node2);
    node2.insertChild(node3);
    node3.insertChild(node4);

    {
        const result = node3.removeChild() orelse unreachable;
        try expect(result.size == 4);
    }

    {
        const result = node2.removeChild() orelse unreachable;
        try expect(result.size == 3);
    }

    {
        const result = node1.removeChild() orelse unreachable;
        try expect(result.size == 2);
    }
}

test "MemNode.countChild()                    : usize" {
    const node1: *MemNode = try MemNode.create(1);
    defer node1.destroy();
    const node2: *MemNode = try MemNode.create(2);
    defer node2.destroy();
    const node3: *MemNode = try MemNode.create(3);
    defer node3.destroy();
    const node4: *MemNode = try MemNode.create(4);
    defer node4.destroy();

    node1.insertChild(node2);
    node2.insertChild(node3);
    node3.insertChild(node4);

    {
        const result = node3.countChild();
        try expect(result == 2);
    }

    {
        const result = node2.countChild();
        try expect(result == 3);
    }

    {
        const result = node1.countChild();
        try expect(result == 4);
    }
}

test "MemNode.removeSuitable()                    : usize" {
    var node1: *MemNode = try MemNode.create(8);
    defer node1.destroy();
    var node2: *MemNode = try MemNode.create(16);
    defer node2.destroy();
    var node3: *MemNode = try MemNode.create(32);
    defer node3.destroy();
    var node4: *MemNode = try MemNode.create(64);
    defer node4.destroy();

    node1.insertChild(node2);
    node2.insertChild(node3);
    node3.insertChild(node4);

    {
        const result = MemNode.removeSuitable(&node3, 33) orelse unreachable;
        try expect(result.size == 64);
    }

    {
        const result = MemNode.removeSuitable(&node2, 20) orelse unreachable;
        try expect(result.size == 32);
    }

    {
        const result = MemNode.removeSuitable(&node1, 10) orelse unreachable;
        try expect(result.size == 16);
    }
}

test "MemNode.removeMatching()                    : usize" {
    var node1: *MemNode = try MemNode.create(8);
    defer node1.destroy();
    var node2: *MemNode = try MemNode.create(16);
    defer node2.destroy();
    var node3: *MemNode = try MemNode.create(32);
    defer node3.destroy();
    var node4: *MemNode = try MemNode.create(64);
    defer node4.destroy();

    node1.insertChild(node2);
    node2.insertChild(node3);
    node3.insertChild(node4);

    {
        const addr = @intFromPtr(node4.block.?);
        const result = MemNode.removeMatching(&node3, addr) orelse unreachable;
        try expect(result.size == 64);
    }

    {
        const addr = @intFromPtr(node3.block.?);
        const result = MemNode.removeMatching(&node2, addr) orelse unreachable;
        try expect(result.size == 32);
    }

    {
        const addr = @intFromPtr(node2.block.?);
        const result = MemNode.removeMatching(&node1, addr) orelse unreachable;
        try expect(result.size == 16);
    }
}
