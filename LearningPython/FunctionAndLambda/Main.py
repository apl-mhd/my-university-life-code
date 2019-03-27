def hello():

    for i in range(0,10):
        print(i,int(str(i))+1)
    print('______________')

hello()


def personDetails(name, age, country='bd'):
    print(name,age,country, sep='|')

personDetails('Apel','20','BD')
personDetails(country='Bangladesh',name='Orko',age=44)

personDetails('a',3)


print('\nFunction as a parameter')

def uprStr(str):
    return str.upper()

uplist = list(map(uprStr,['apel','orko']))

print(uplist)

print('\n pass by value')

num = 100

def sum(n):

    n +=n
    return n


print(sum(num))
print(num)


print('\n 1/0 parameter')

def students(id,*name):
    print(id)
    print(name)


students(1111,'orko','orin','sabi')
students(1111)

print('\n parameter as a list')
def info(id, **name):
    print(id)
    print(name)
    for key, value in name.items():
        print(key,value)

info(123,a='aa',b='r')

print('\n Lambda')

sm =  lambda x,y : x+y
print(sm(1,2))



