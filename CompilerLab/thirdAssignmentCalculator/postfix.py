

operator = ['+','-','*','/']

bracket = ['(',')']

pm = ['+','-']
md = ['*','/']

stackOprator = [] #+,-*,/
stackOprand = []


if '(' in bracket and '+' in pm:
    print('hello')






def inFixToPostFix(expr):

    for i in  expr:

        if i not  in operator and i not in bracket:
            stackOprand.append(i)

        elif i in pm and  len(stackOprator) != 0 and stackOprator[-1] in md or i in ')':

            while(len(stackOprator) !=0):

                    if stackOprator[-1] == '(':
                        stackOprator.pop()
                    else:
                        stackOprand.append(stackOprator.pop())

        else:
            stackOprator.append(i)

    print(stackOprator)

    while(len(stackOprator) !=0):
        stackOprand.append(stackOprator.pop())













inFixToPostFix('a+(b*c)+x')

print(stackOprand)
print(stackOprator)






















