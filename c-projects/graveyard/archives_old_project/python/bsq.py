def is_valid(matrix, row, col, size):
    for i in range(size):
        for j in range(size):
            if row + i >= len(matrix) or col + j >= len(matrix[0]) or matrix[row + i][col + j] == 0:
                return False
    return True

def backtrack(matrix, row, col, size):
    if is_valid(matrix, row, col, size):
        return size
    return backtrack(matrix, row, col, size - 1)

def find_largest_square(matrix, rows, cols):
    max_size = min(rows, cols)
    for row in range(rows):
        for col in range(cols):
            if matrix[row][col] == 1:
                max_size = max(max_size, backtrack(matrix, row, col, max_size))
    return max_size

def update_matrix(matrix, row, col, size):
    for i in range(size):
        for j in range(size):
            matrix[row + i][col + j] = 2

def print_matrix(matrix):
    for row in matrix:
        print(' '.join(map(str, row)))

def solve(matrix, rows, cols):
    largest_size = find_largest_square(matrix, rows, cols)
    for row in range(rows):
        for col in range(cols):
            if matrix[row][col] == 1 and is_valid(matrix, row, col, largest_size):
                update_matrix(matrix, row, col, largest_size)
                return matrix

    return None

rows = 6
cols = 7
input_matrix = [
    [1, 1, 1, 1, 1, 0, 1],
    [1, 1, 1, 1, 1, 0, 0],
    [1, 1, 0, 0, 1, 1, 1],
    [1, 1, 1, 1, 0, 1, 1],
    [1, 1, 1, 1, 1, 1, 0],
    [1, 1, 1, 0, 1, 1, 1]
]

result = solve(input_matrix, rows, cols)
if result:
    print_matrix(result)
else:
    print("No solution found.")

