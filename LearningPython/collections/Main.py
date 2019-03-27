import  re
matrix = [[1,2,3],
          [4,5,6],
          [7,8,9]
          ]

print(matrix)
print(matrix[0])

print(len(matrix[0]))

print(len(matrix[0]))

for i in  matrix:
    for y in i:
        print(y,end=' ')
    print()

numberList = [1,2,3,4.3]

print(numberList[0:6])

print('apel','mahmud','orin')

sum =0
for i in numberList:
    sum +=i
print(sum)


mixList = ['toyota',1,2,3,False,True, 'a']

print(mixList)
mixList.append(120)
mixList +=['apel','orko']
mixList.insert(0,'harami')
print(mixList)

print('_____________')

cars = ['tyota','bmw','ferari','mcz','scania','hyundai']

print(cars)
cars.pop(0)
print(cars)

print('remove from list')


numbers = [1,2,3,4,5,5,6]
print(numbers)
numbers.remove(5)
print(numbers)

print('string convert into a list')

name = "apel Mahmud Orko Orin"
#w =[]
print(name)
w = re.split(' ', name)
print(w)

print('\nList to string Convert\n')

name = ', '.join(w)

print(name)

print('\nSOrt function\n')
cars = ['tyota','bmw','ferari','mcz','scania','hyundai']
print(cars)
cars.sort()
print(cars)
print('\nReverse Sort\n')
cars.sort(reverse=True)
print(cars)


print('\nTemporary sort\n')
print(sorted(cars))
print(cars)

c = sorted(cars) #this is not affected to orignal value
print(c)


print('\nReversing list\n')
numbers = [1,2,3,4,5]
print(numbers)
numbers.reverse()
print(numbers)

print('\n Check exist in list or not')
if 2 in numbers:
    print("success")

print('\n Touple')

tp  = 1,2,3,'Bils',3.3,True,False
print(tp,type(tp))

print(tp[0],tp[1],tp[2],sep='|')

print('\n Unpacking Tuple')
a,b,c,d,e,f,_ = tp

print(a,b,c)


print('\n Dictionary')

dict ={10:97,20:98,1:99,2:100}


print(dict)

for key,value in dict.items():
    print(key)

print('\n key print')
for key in  dict.keys():
    print(key)



print('\n Value print\n')
for value in  dict.values():
    print(value)

print('\n')

for key in  sorted(dict):
    print(dict[key])


print('\nSet')

numSet = set()
numSet.add(1)
numSet.add(2)
numSet.add(3)
print(numSet)



