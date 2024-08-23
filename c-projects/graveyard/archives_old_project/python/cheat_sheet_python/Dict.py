# Dictionaries

def demonstrate_dict_operations():
    print("----- Dictionaries -----\n")

    # Creating a dictionary
    student = {
        'name': 'John',
        'age': 20,
        'major': 'Computer Science',
        'gpa': 3.8
    }
    print(f"Original dictionary: {student}")

    # Accessing values
    print("Accessing values:")
    print(f"Name: {student['name']}")
    print(f"Age: {student['age']}")
    print(f"Major: {student['major']}")

    # Modifying values
    print("\nModifying values:")
    student['gpa'] = 3.9
    print(f"After modifying GPA: {student}")

    # Adding a new key-value pair
    print("\nAdding a new key-value pair:")
    student['year'] = 3
    print(f"After adding 'year' key: {student}")

    # Removing a key-value pair
    print("\nRemoving a key-value pair:")
    del student['major']
    print(f"After removing 'major' key: {student}")


def demonstrate_useful_dict_methods():
    print("\n\n----- Useful methods for Dictionaries -----\n")

    student = {
        'name': 'John',
        'age': 20,
        'major': 'Computer Science',
        'gpa': 3.8
    }

    keys = student.keys()
    print(f"Keys in the dictionary: {keys}")

    values = student.values()
    print(f"Values in the dictionary: {values}")

    items = student.items()
    print(f"Key-value pairs in the dictionary: {items}")

    dict_length = len(student)
    print(f"Length of the dictionary: {dict_length}")

    student_copy = student.copy()
    print(f"Copy of the dictionary: {student_copy}")

    student.clear()
    print(f"After clearing the dictionary: {student}")


# Demonstrate dictionary operations
demonstrate_dict_operations()

# Demonstrate useful dictionary methods
demonstrate_useful_dict_methods()

