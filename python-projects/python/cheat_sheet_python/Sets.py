# Sets

def demonstrate_set_operations():
    print("----- Sets -----\n")

    # Creating a set
    fruits = {'apple', 'banana', 'cherry', 'durian'}
    print(f"Original set: {fruits}")

    # Adding elements to a set
    print("\nAdding elements to a set:")
    fruits.add('orange')
    print(f"After adding 'orange' to the set: {fruits}")

    # Removing elements from a set
    print("\nRemoving elements from a set:")
    fruits.remove('cherry')
    print(f"After removing 'cherry' from the set: {fruits}")

    # Set operations
    print("\nSet operations:")
    more_fruits = {'grape', 'kiwi'}
    all_fruits = fruits.union(more_fruits)
    print(f"Union of sets: {all_fruits}")

    common_fruits = fruits.intersection(more_fruits)
    print(f"Intersection of sets: {common_fruits}")

    diff_fruits = fruits.difference(more_fruits)
    print(f"Difference of sets: {diff_fruits}")


def demonstrate_useful_set_methods():
    print("\n\n----- Useful methods for Sets -----\n")

    numbers = {5, 2, 8, 1, 9, 3}

    set_length = len(numbers)
    print(f"Length of the set: {set_length}")

    numbers.add(7)
    print(f"After adding an element to the set: {numbers}")

    numbers.remove(2)
    print(f"After removing an element from the set: {numbers}")

    numbers_copy = numbers.copy()
    print(f"Copy of the set: {numbers_copy}")

    numbers.clear()
    print(f"After clearing the set: {numbers}")


# Demonstrate set operations
demonstrate_set_operations()

# Demonstrate useful set methods
demonstrate_useful_set_methods()

