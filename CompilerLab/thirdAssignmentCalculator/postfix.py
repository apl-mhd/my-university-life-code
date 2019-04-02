

operator = ['+','-','*','/']

bracket = ['(',')']

pm = ['+','-']
md = ['*','/']

stackOprator = [] #+,-*,/
stackOprand = []


alphabet = {
    'a':0,'b':0,'c':0,'d':0,'e':0,'f':0,'g':0,'h':0,'i':0,'j':0,
'k':0,'l':0,'m':0,'n':0,'i':0,'j':0,'k':0,'l':0,'m':0,'n':0,'o':0,
'p':0,'q':0,'r':0,'s':0,'t':0,'u':0,'v':0,'w':0,'x':0,'y':0,'z':0,
}







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



def ans(result):
    with open('output.txt','a') as wob:
        wob.write(str(result))




with open('input.txt','r') as obr:
    x= obr.readlines()

    for i in x:
        print('do you wan to save?',i)
        yn = input('y or n :')
        if yn.lower() == 'y':

            ans(i)








#abc++dc+*
#abc+dc+*+
#abc+dc+*+
#abc+dc+*+



























