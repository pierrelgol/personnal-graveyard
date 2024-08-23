print(1234,3.1415)
print("Hello World!")

S = 'Spam'
MyName = 'Pierre'

print(len(S))

MyName = MyName[5]+MyName[4]+MyName[3]+MyName[2]+MyName[1]+MyName[0]
print(MyName)

L = list(S)
L[0] = 'K'
print(''.join(L))

sentence = "My Sentence has spaces but I want to display it without"
print(sentence)
sentence = sentence.replace(' ','')
print(sentence)
