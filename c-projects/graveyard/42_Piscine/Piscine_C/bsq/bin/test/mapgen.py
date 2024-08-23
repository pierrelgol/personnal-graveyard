#!/usr/bin/env python
import sys
import random

if len(sys.argv) != 4:
    sys.exit("Usage: program x y density")

x, y, density = map(int, sys.argv[1:])
print(f"{y}.ox")

for i in range(y):
    for j in range(x):
        if random.randint(0, y * 2 - 1) < density:
            print("o", end="")
        else:
            print(".", end="")
    print()
