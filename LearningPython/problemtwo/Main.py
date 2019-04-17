

alloprtr = ['+','-', '*', '/']

digitAll = ['1','2','3','4','5','6','7','8','9','0']



opr = {}

oprator =[]

result = []




with open('result.txt', 'r') as rslt:

        for i in rslt:
            i = i.replace('\n','')

            result.append(int(i))










with open('ex.txt','r') as rexp:

    j=0
    sum=0

    for i in  rexp:
        i = i.replace('\n', '')

        if i[-1] in alloprtr:

            sum = 'error input'
            print(sum)

            continue


        elif i[1] == '+':

            sum =  int(i[0]) + int(i[2])



        elif i[1] == '-':
            sum = int(i[0]) - int(i[2])



        elif i[1] == '*':
            sum = int(i[0]) * int(i[2])



        elif i[1] == '/':
            sum = int(i[0]) / int(i[2])




        sum = sum - result[j]

        sum = pow(abs(sum),3)

        print(sum)

        j +=1









