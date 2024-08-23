# Integers

def demonstrate_integer_operations():
    print("----- Integers -----\n")

    a = 5
    b = 2

    print("Basic arithmetic operations:")
    print(f"Addition: {a} + {b} = {a + b}")
    print(f"Subtraction: {a} - {b} = {a - b}")
    print(f"Multiplication: {a} * {b} = {a * b}")
    print(f"Division: {a} / {b} = {a / b}")
    print(f"Integer Division: {a} // {b} = {a // b}")
    print(f"Modulo: {a} % {b} = {a % b}")
    print(f"Exponentiation: {a} ** {b} = {a ** b}")

    print("\nComparisons:")
    print(f"Equal to: {a} == {b} -> {a == b}")
    print(f"Not equal to: {a} != {b} -> {a != b}")
    print(f"Greater than: {a} > {b} -> {a > b}")
    print(f"Less than: {a} < {b} -> {a < b}")
    print(f"Greater than or equal to: {a} >= {b} -> {a >= b}")
    print(f"Less than or equal to: {a} <= {b} -> {a <= b}")

    print("\nAssignment operations:")
    c = a
    c += b
    print(f"Add and assign: c += {b} -> c = {c}")
    c = a
    c -= b
    print(f"Subtract and assign: c -= {b} -> c = {c}")
    c = a
    c *= b
    print(f"Multiply and assign: c *= {b} -> c = {c}")
    c = a
    c /= b
    print(f"Divide and assign: c /= {b} -> c = {c}")
    c = a
    c //= b
    print(f"Integer divide and assign: c //= {b} -> c = {c}")
    c = a
    c %= b
    print(f"Modulo and assign: c %= {b} -> c = {c}")
    c = a
    c **= b
    print(f"Exponentiate and assign: c **= {b} -> c = {c}")

    print("\nBitwise operations:")
    c = a & b
    print(f"Bitwise AND: {a} & {b} -> {c}")
    c = a | b
    print(f"Bitwise OR: {a} | {b} -> {c}")
    c = a ^ b
    print(f"Bitwise XOR: {a} ^ {b} -> {c}")
    c = ~a
    print(f"Bitwise NOT: ~{a} -> {c}")
    c = a << b
    print(f"Left Shift: {a} << {b} -> {c}")
    c = a >> b
    print(f"Right Shift: {a} >> {b} -> {c}")


def demonstrate_useful_integer_methods():
    print("\n\n----- Useful methods for Integers -----\n")

    num = 12345

    num_str = str(num)
    print(f"Convert integer to string: str({num}) -> '{num_str}'")

    num_bit_length = num.bit_length()
    print(f"Get the number of bits required to represent the integer: {num}.bit_length() -> {num_bit_length}")

    num_abs = abs(num)
    print(f"Get the absolute value of the integer: abs({num}) -> {num_abs}")

    num_pow = pow(num, 2)
    print(f"Raise the integer to a power: pow({num}, 2) -> {num_pow}")


# Demonstrate integer operations
demonstrate_integer_operations()

# Demonstrate useful integer methods
demonstrate_useful_integer_methods()
