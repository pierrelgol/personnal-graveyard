# Comparison Operators

print("----- Comparison operators -----\n")

val1 = 10
val2 = 5

print(f"val1 = {val1}, val2 = {val2}")
print("")

equal_cmp = val1 == val2
print(f"Equality operator '==': val1 == val2 : {equal_cmp}")
print("")

not_equal_cmp = val1 != val2
print(f"Not equal operator '!=': val1 != val2 : {not_equal_cmp}")
print("")

superior = val1 > val2
print(f"Superior operator '>': val1 > val2 : {superior}")
print("")

inferior = val1 < val2
print(f"Inferior operator '<': val1 < val2 : {inferior}")
print("")

superior_or_equal = val1 >= val2
print(f"Superior or equal operator '>=': val1 >= val2 : {superior_or_equal}")
print("")

inferior_or_equal = val1 <= val2
print(f"Inferior or equal operator '<=': val1 <= val2 : {inferior_or_equal}")
print("")
