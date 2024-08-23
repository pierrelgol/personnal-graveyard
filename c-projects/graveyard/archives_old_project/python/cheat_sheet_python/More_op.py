# Identity, Membership, and Ternary Operators

print("----- Identity, Membership, and Ternary Operators -----\n")

name = "Pierre"
tupl = (1, 2, 3, 4)

print(f"'is' is the identity operator, returns True if an object is of the type of the compared object")
print(f"name is name: {name is name}")
print("")

print(f"'in' is the membership operator, returns True if an object or element is inside a collection")
print(f"3 in tupl: {3 in tupl}")
print("")

print("The ternary operator is used to simplify conditional expressions")
print("\nIn a function:\n")
print("def is_adult(age):")
print("\tif age > 18:")
print("\t\treturn True")
print("\telse:")
print("\t\treturn False")
print("")
print("Can be simplified with the ternary operator:")
print("def is_adult(age):")
print("\treturn True if age > 18 else False")
print("")
