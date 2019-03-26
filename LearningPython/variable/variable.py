name = "Grocery list"
detail = "Buy From super shop"
number_of_item = 5
budget = 5000

print(name, type(name))


number1 = 10.0
number2 = 2


number3 = (number1)+int(number2)


result = divmod(100,3.0)  #mod

print(result)

print(number3)


x = 2

x = x ** 4 #power

y = pow(2,4)
print(x)
print(y)

fullname = "APel mahmu"


print(fullname[0])


print(fullname.title())
print(fullname.upper())
print(fullname.lower())

print("Apelv "+'\n' +"Mahmud")


print("apel's mahmud")
print('apel"s mahmud')
print("apel\"s mahmud")
print("apel\'s mahmud")


fileName = "bigdata.txt"
print(fileName.endswith('.txt'))
print(fileName.startswith('bi'))
print(fileName.startswith('ss'))


sentence = "A fox jump over the lazy dog"

print(sentence.find('fox'))
print(sentence.find('jump'))
print(sentence.find('j'))
print(sentence[6:10])


print(sentence.replace('fox','tiger'))
print(sentence)

sentence2 ='orko orko'

sentence2 = sentence2.replace('orko','orko2')

print(sentence2)

dis = ('Dhaka', 'Bogura', 'kumilla')

print(dis[0], dis[1], dis[2],sep=' | ')
print()

name = 'Tylor Jarina'

print(name[2:-1])

num = int(input("Please enter number"))


if num % 2 ==0:
    print("This is even number")

else:
    print('Not even')


x =1

while x in range(10):
    print(x)
    x +=1

