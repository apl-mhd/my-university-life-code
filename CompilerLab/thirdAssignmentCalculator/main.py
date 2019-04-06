import postfix



p = postfix.inFixToPostFix('1+2-3+9')
print(p)

resultQ =[]

result=0

for i in  p:

    if  i in postfix.pm:

        two = int(resultQ.pop())
        one = int(resultQ.pop())
        if i =='+':
            result = one + two
        elif i == '-':
            result = one - two


        resultQ.append(result)

    else:
        resultQ.append(i)


print(resultQ[0])





