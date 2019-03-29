class Math:
    def __init__(self,x,y):
        self._x = x
        self._y = y

    def sum(self):
        return self._x + self._y


ob = Math(10,2)

print(ob._x)