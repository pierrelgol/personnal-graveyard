# Data Types

print("----- Data Types -----\n")

na = "Pierre"
print(f"na = {na}, na is an instance of {type(na)}: {isinstance(na, str)}")
print("")

n = 2023
print(f"n = {n}, n is an instance of {type(n)}: {isinstance(n, int)}")
print("")

f = 3.141
print(f"f = {f}, f is an instance of {type(f)}: {isinstance(f, float)}")
print("")

ls = [3, 4, 7]
print(f"ls = {ls}, ls is an instance of {type(ls)}: {isinstance(ls, list)}")
print("")

dic = {"name": na, "numb": n, "ls": ls}
print(f"dic = {dic}, dic is an instance of {type(dic)}: {isinstance(dic, dict)}")
print("")

tp = (0, 1, 2, 3, 4, 5, 6)
print(f"tp = {tp}, tp is an instance of {type(tp)}: {isinstance(tp, tuple)}")
print("")
