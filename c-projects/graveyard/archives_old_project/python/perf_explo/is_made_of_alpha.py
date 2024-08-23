def is_made_of_alpha(string):
    alphab = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
              'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}
    return True if ((set(list(string)) & alphab)) == alphab else False


strg1 = "abcdefghijklmnopqrstuvwxyz"
strg2 = "abcdefghijklmnopqrstuvwxy"
strg3 = "abcd/34m,m,efghijkl,./mnopqr/,stuvwxgryz,"
strg4 = "a b c d e f g h i j k l m n o p q r s t u v w x y z"


print(strg1, is_made_of_alpha(strg1))
print(strg2, is_made_of_alpha(strg2))
print(strg3, is_made_of_alpha(strg3))
print(strg4, is_made_of_alpha(strg4))
