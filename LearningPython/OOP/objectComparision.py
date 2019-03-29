x = [1,2,3]

xx = x

if xx == x:
    print(True)

if xx is x:
    print(True)


y = list(x)

print(x == y)
print(x is y)