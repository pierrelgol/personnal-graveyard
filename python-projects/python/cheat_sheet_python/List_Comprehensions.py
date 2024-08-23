# List Comprehensions

print("----- List comprehensions -----\n")

# Example 1: Squaring numbers
numbers = [1, 2, 3, 4, 5]
squared_numbers = [num ** 2 for num in numbers]
print(f"Squared numbers using list comprehension: {squared_numbers}")

# Example 2: Filtering even numbers
even_numbers = [num for num in numbers if num % 2 == 0]
print(f"Even numbers using list comprehension: {even_numbers}")

# Example 3: Uppercase names
names = ['Alice', 'Bob', 'Charlie', 'David']
uppercase_names = [name.upper() for name in names]
print(f"Uppercase names using list comprehension: {uppercase_names}")

# Example 4: Lengths of names
name_lengths = [len(name) for name in names]
print(f"Name lengths using list comprehension: {name_lengths}")

# Example 5: Multiplying elements by index
multiplied_by_index = [num * index for index, num in enumerate(numbers)]
print(f"Elements multiplied by index using list comprehension: {multiplied_by_index}")

# Example 6: Filtering strings by length
long_strings = [string for string in names if len(string) > 4]
print(f"Strings with length greater than 4 using list comprehension: {long_strings}")

# Example 7: Flattening a 2D list
matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
flattened_list = [num for row in matrix for num in row]
print(f"Flattened list using list comprehension: {flattened_list}")

# Example 8: Creating a dictionary from two lists
keys = ['a', 'b', 'c']
values = [1, 2, 3]
dictionary = {key: value for key, value in zip(keys, values)}
print(f"Dictionary created from two lists using list comprehension: {dictionary}")

