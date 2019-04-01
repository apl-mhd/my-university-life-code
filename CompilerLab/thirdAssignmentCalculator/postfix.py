

operator = ['+','-','*','/']

pm = ['+','-']
md = ['*','/']



stack = [3, 4, 5]

print(stack[-1])

oprSt = [] #operator stac
oprandSt = [] #oprand stack



def inFixToPostFix(expr):

    for i in  expr:
        if i not in operator:
            oprandSt.append(i)

        else:
            if len(oprSt) == 0:
                oprSt.append(i)
            else:
                oprTemp = oprSt[-1]

                if  i in operator and oprTemp in operator:
                    if i in pm and not i in md:















inFixToPostFix('a+b')







