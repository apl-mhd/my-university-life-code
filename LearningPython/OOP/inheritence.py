class Math:
    def __init__(self,x,y):
        self.x = x
        self.y = y

    def sum(self):

        return self.x + self.y


class MathExtend1(Math):
    def __init__(self,x,y):
        super().__init__(x,y)


    def sub(self):

        return self.x - self.y

class MathExtra:

    def __init__(self,x,y):
        super().__init__(x,y)


    def div(self):

        return self.x/self.y

#multiple Inheritance


class MathExtend2(Math,MathExtra):

    def __init__(self,x,y):
        super().__init__(x,y)
        super().__init__(x, y)
        #MathExtra.__init__(x, y)




ob = MathExtend2(30,10)

print(ob.div())


