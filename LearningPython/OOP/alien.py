class Alien:
    legs = 5

    def __init__(self,name):
        self.name = name




ob1 = Alien('Orko')
ob2 =Alien('Orin')

print(ob1.name)
print(ob2.name)

print(ob1.legs)
print(ob2.legs)

Alien.legs =100


print(ob1.legs)
print(ob2.legs)

ob1.__class__.legs =4


print(ob1.legs)
print(ob2.legs)

ob1.legs =1



print(ob1.legs)
print(ob2.legs)


