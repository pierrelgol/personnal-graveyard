# Floats

def demonstrate_float_operations():
    print("----- Floats -----\n")

    a = 3.14
    b = 1.23

    print("Basic arithmetic operations:")
    print(f"Addition: {a} + {b} = {a + b}")
    print(f"Subtraction: {a} - {b} = {a - b}")
    print(f"Multiplication: {a} * {b} = {a * b}")
    print(f"Division: {a} / {b} = {a / b}")
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
    c **= b
    print(f"Exponentiate and assign: c **= {b} -> c = {c}")


def demonstrate_useful_float_methods():
    print("\n\n----- Useful methods for Floats -----\n")

    num = 3.14159

    num_str = str(num)
    print(f"Convert float to string: str({num}) -> '{num_str}'")

    num_round = round(num, 2)
    print(f"Round float to a specific number of decimal places: round({num}, 2) -> {num_round}")

    num_abs = abs(num)
    print(f"Get the absolute value of the float: abs({num}) -> {num_abs}")

    num_int = int(num)
    print(f"Convert float to integer: int({num}) -> {num_int}")


# Demonstrate float operations
demonstrate_float_operations()

# Demonstrate useful float methods
demonstrate_useful_float_methods()
