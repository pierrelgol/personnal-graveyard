# 20 Useful Functions from the Python Standard Library

import math
import random
import datetime
import os
import json
import csv
import urllib.request
import hashlib
import itertools
import functools
import collections
import string
import re
import subprocess
import shutil
import sys
import time
import calendar
import zipfile
import logging

# 1. math.sqrt(): Calculates the square root of a number.
print(f"Square root of 16: {math.sqrt(16)}")

# 2. random.choice(): Returns a random element from a sequence.
fruits = ['apple', 'banana', 'orange']
random_fruit = random.choice(fruits)
print(f"Random fruit: {random_fruit}")

# 3. datetime.datetime.now(): Returns the current date and time.
current_time = datetime.datetime.now()
print(f"Current time: {current_time}")

# 4. os.getcwd(): Returns the current working directory.
current_directory = os.getcwd()
print(f"Current directory: {current_directory}")

# 5. json.dumps(): Converts a Python object into a JSON string.
data = {'name': 'John', 'age': 30}
json_string = json.dumps(data)
print(f"JSON string: {json_string}")

# 6. csv.reader(): Reads a CSV file and returns an iterator.
with open('data.csv', 'r') as csv_file:
    csv_reader = csv.reader(csv_file)
    for row in csv_reader:
        print(row)

# 7. urllib.request.urlopen(): Opens a URL and returns a file-like object.
response = urllib.request.urlopen('https://www.example.com')
html = response.read()
print(f"HTML content: {html}")

# 8. hashlib.md5(): Computes the MD5 hash of a string.
hash_object = hashlib.md5(b'Hello, world!')
md5_hash = hash_object.hexdigest()
print(f"MD5 hash: {md5_hash}")

# 9. itertools.permutations(): Generates all possible permutations of a sequence.
perms = itertools.permutations([1, 2, 3])
print("Permutations:")
for perm in perms:
    print(perm)

# 10. functools.partial(): Creates a new function with some arguments pre-set.
add_five = functools.partial(lambda x, y: x + y, 5)
result = add_five(10)
print(f"Result of partial function: {result}")

# 11. collections.Counter(): Counts the occurrences of elements in a sequence.
fruits = ['apple', 'banana', 'apple', 'orange', 'banana']
fruit_count = collections.Counter(fruits)
print(f"Fruit count: {fruit_count}")

# 12. string.ascii_letters: A string containing all ASCII letters.
print(f"ASCII letters: {string.ascii_letters}")

# 13. re.match(): Matches a pattern at the beginning of a string.
pattern = r'^\d+'
result = re.match(pattern, '12345')
print(f"Match result: {result}")

# 14. subprocess.run(): Executes a command as a subprocess.
result = subprocess.run(['ls', '-l'], capture_output=True, text=True)
print(f"Output of 'ls -l':\n{result.stdout}")

# 15. shutil.copy(): Copies a file from one location to another.
shutil.copy('source.txt', 'destination.txt')

# 16. sys.argv: A list of command-line arguments passed to a script.
print(f"Command-line arguments: {sys.argv}")

# 17. time.sleep(): Suspends execution for a specified number of seconds.
print("Sleeping for 3 seconds...")
time.sleep(3)
print("Awake!")

# 18. calendar.monthrange(): Returns the start day and number of days in a month.
start_day, num_days = calendar.monthrange(2023, 1)
print(f"Start day of January 2023: {start_day}")
print(f"Number of days in January 2023: {num_days}")

# 19. zipfile.ZipFile(): Creates or extracts files from a ZIP archive.
with zipfile.ZipFile('archive.zip', 'w') as zip_file:
    zip_file.write('file.txt')

# 20. logging.getLogger(): Returns a logger object for logging messages.
logger = logging.getLogger('my_logger')
logger.setLevel(logging.INFO)
logger.info('This is an informational message')


