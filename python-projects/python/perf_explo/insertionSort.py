import random


def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key


# Generate a list of 10,000 random integers
random_list = [random.randint(1, 10000) for _ in range(10000)]

# Sort the list using Insertion Sort
insertion_sort(random_list)