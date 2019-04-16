import postfix as  helper






'''
alphabetSum = {
    'a':0,'b':0,'c':0,'d':0,'e':0,'f':0,'g':0,'h':0,'i':0,'j':0,
'k':0,'l':0,'m':0,'n':0,'i':0,'j':0,'k':0,'l':0,'m':0,'n':0,'o':0,
'p':0,'q':0,'r':0,'s':0,'t':0,'u':0,'v':0,'w':0,'x':0,'y':0,'z':0,
}
'''

az =['a','b','c','d','e','f','g','h','i','j', 'k', 'l','m','n','o','p','q','r','s','t','u','v', 'w', 'x','y','z']




eq =('a=','b=','c=','d=','e=','f=','g=','h=','i=','j=', 'k=', 'l=','m=','n=','o=','p=','q=','r=','s=','t=','u=','v=', 'w=', 'x=','y=','z=')


name ='a='

#print(name.startswith(eq))




#p = helper.inFixToPostFix('a+b+c')


def infixEval(p):
    resultQ =[]

    result=0

    for i in  p:

        if  i in helper.pm or i in helper.md:

            two = int(resultQ.pop())
            one = int(resultQ.pop())

            if i == '+':

                result = one + two


            elif i == '-':

                result = one - two


            elif i == '*':

                result = one * two


            elif i == '/':

                result = one / two

            resultQ.append(result)


        else:
            resultQ.append(i)


    print(resultQ)

    return  resultQ[0]





#print(infixEval(p))


def writeTofile(result):
    with open('output.txt', 'a') as wobj:
        wobj.write(result)




with open('input.txt','r') as robj:



    for i in  robj:
        abc = ''
        temp = i[0:len(i)-1]    #remove for new line
        #print(temp)

        if temp.startswith(eq):
            #print(temp[0:2])
            abc = temp[0]       #strore x,y,z
            temp =  temp[2:]    # ex. remove x=

        if temp.endswith(';')  == False:           #check semicolone at the last
            print('error ; semicolon missing')
            #print(i)
            break

        else:
            #print(abc)
            x = helper.inFixToPostFix(temp[0:len(temp)-1]) #remove semicolone
            #print(x)
            #x = ''.join(x)
            x = infixEval(x)
            #print(x)

            if len(abc) > 0:
                helper.alphabetSum[abc] = x

            yn = input('D you want to save it to file:')

            if yn =='y':
                writeTofile(str(x)+'\n')


print(helper.alphabetSum)




