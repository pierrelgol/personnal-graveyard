# Lists

def demonstrate_list_operations():
    print("----- Lists -----\n")

    # Creating a list
    fruits = ['apple', 'banana', 'cherry', 'durian']
    print(f"Original list: {fruits}")

    # Accessing elements
    print("Accessing elements:")
    print(f"First element: {fruits[0]}")
    print(f"Last element: {fruits[-1]}")
    print(f"Slicing: {fruits[1:3]}")  # Elements at index 1 and 2

    # Modifying elements
    print("\nModifying elements:")
    fruits[0] = 'avocado'
    print(f"After modifying first element: {fruits}")

    # List concatenation
    print("\nList concatenation:")
    more_fruits = ['grape', 'kiwi']
    all_fruits = fruits + more_fruits
    print(f"Concatenated list: {all_fruits}")

    # List methods
    print("\nList methods:")
    all_fruits.append('mango')
    print(f"After appending an element: {all_fruits}")

    all_fruits.remove('cherry')
    print(f"After removing an element: {all_fruits}")

    all_fruits.reverse()
    print(f"After reversing the list: {all_fruits}")


def demonstrate_useful_list_methods():
    print("\n\n----- Useful methods for Lists -----\n")

    numbers = [5, 2, 8, 1, 9, 3]

    list_length = len(numbers)
    print(f"Length of the list: {list_length}")

    list_sorted = sorted(numbers)
    print(f"Sorted list: {list_sorted}")

    list_sum = sum(numbers)
    print(f"Sum of elements in the list: {list_sum}")

    list_index = numbers.index(8)
    print(f"Index of an element in the list: {list_index}")

    list_count = numbers.count(5)
    print(f"Count of an element in the list: {list_count}")

    numbers.clear()
    print(f"After clearing the list: {numbers}")


# Demonstrate list operations
demonstrate_list_operations()

# Demonstrate useful list methods
demonstrate_useful_list_methods()
