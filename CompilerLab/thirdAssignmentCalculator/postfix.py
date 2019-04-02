

operator = ['+','-','*','/']

bracket = ['(',')']

pm = ['+','-']
md = ['*','/']

stackOprator = [] #+,-*,/
stackOprand = []









def inFixToPostFix(expr):

    for i in  expr:

        if i not  in operator and i not in bracket:
            stackOprand.append(i)

        elif i in pm and  len(stackOprator) != 0 and stackOprator[-1] in md or i in ')':

            while(len(stackOprator) != 0):

                    if stackOprator[-1] == '(':
                        stackOprator.pop()
                        break
                    else:
                        stackOprand.append(stackOprator.pop())

        else:
            stackOprator.append(i)



    while(len(stackOprator) !=0):
        stackOprand.append(stackOprator.pop())

    return stackOprand




#abc++dc+*
#abc+dc+*+
#abc+dc+*+
#abc+dc+*+



























