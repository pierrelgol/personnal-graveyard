# Strings

def demonstrate_string_operations():
    print("----- Strings -----\n")

    print("Strings can be written with single or double quotes. They are immutable and cannot be changed using index assignment like `str = 'name'\nstr[3] = 'b'` (this is illegal)")
    print("")
    print("Instead, to change a specific character in a string, one should assign a modified value to the entire string as a whole:")
    print("str = str[:-1] + 'b'")
    string = "name"
    print(f"str = {string}")
    string = string[:-1] + 'b'
    strrev = string[:0:-1]
    print(f"str = {string}")
    print(f"str = {strrev}")
    print("Strings can be multiline with triple quotes:")
    print("""This
is
a
multiline
string""")


def demonstrate_useful_string_methods():
    print("\n\n----- Useful methods for Strings -----\n")

    string = 'name'
    string_concatenation = 'My ' + string + ' is Pierre'
    print(f"To concatenate a string: 'My ' + 'name' + ' is Pierre' -> {string_concatenation}")

    sentence = "HELLO WORLD!"

    sentence_lower = sentence.lower()
    print(f"To transform a string to lowercase: 'HELLO WORLD!'.lower() -> {sentence_lower}")

    sentence_upper = sentence.upper()
    print(f"To transform a string to uppercase: 'HELLO WORLD!'.upper() -> {sentence_upper}")

    sentence_title = sentence.title()
    print(f"To capitalize the first letter of each word in a string: 'HELLO WORLD!'.title() -> {sentence_title}")

    sentence_starts_with = sentence.startswith('HELLO')
    print(f"To check if a string starts with a specific prefix: 'HELLO WORLD!'.startswith('HELLO') -> {sentence_starts_with}")

    sentence_ends_with = sentence.endswith('WORLD')
    print(f"To check if a string ends with a specific suffix: 'HELLO WORLD!'.endswith('WORLD') -> {sentence_ends_with}")

    sentence_split = sentence.split(' ')
    print(f"To split a string into a list of substrings based on a delimiter: 'HELLO WORLD!'.split(' ') -> {sentence_split}")

    sentence_join = ' '.join(['HELLO', 'WORLD!'])
    print(f"To join a list of strings into a single string using a delimiter: ' '.join(['HELLO', 'WORLD!']) -> {sentence_join}")

    sentence_strip = '   hello   '.strip()
    print(f"To remove leading and trailing whitespaces from a string: '   hello   '.strip() -> {sentence_strip}")

    sentence_replace = sentence.replace('HELLO', 'HI')
    print(f"To replace all occurrences of a substring in a string: 'HELLO WORLD!'.replace('HELLO', 'HI') -> {sentence_replace}")

    sentence_length = len(sentence)
    print(f"To get the length of a string: len('HELLO WORLD!') -> {sentence_length}")


# Demonstrate string operations
demonstrate_string_operations()

# Demonstrate useful string methods
demonstrate_useful_string_methods()
