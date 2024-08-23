# Tuples

def demonstrate_tuple_operations():
    print("----- Tuples -----\n")

    # Creating a tuple
    fruits = ('apple', 'banana', 'cherry', 'durian')
    print(f"Original tuple: {fruits}")

    # Accessing elements
    print("Accessing elements:")
    print(f"First element: {fruits[0]}")
    print(f"Last element: {fruits[-1]}")
    print(f"Slicing: {fruits[1:3]}")  # Elements at index 1 and 2

    # Modifying a tuple (not allowed)
    # fruits[0] = 'avocado'  # This will raise an error

    # Tuple concatenation
    print("\nTuple concatenation:")
    more_fruits = ('grape', 'kiwi')
    all_fruits = fruits + more_fruits
    print(f"Concatenated tuple: {all_fruits}")


def demonstrate_useful_tuple_methods():
    print("\n\n----- Useful methods for Tuples -----\n")

    numbers = (5, 2, 8, 1, 9, 3)

    tuple_length = len(numbers)
    print(f"Length of the tuple: {tuple_length}")

    tuple_index = numbers.index(8)
    print(f"Index of an element in the tuple: {tuple_index}")

    tuple_count = numbers.count(5)
    print(f"Count of an element in the tuple: {tuple_count}")


# Demonstrate tuple operations
demonstrate_tuple_operations()

# Demonstrate useful tuple methods
demonstrate_useful_tuple_methods()
