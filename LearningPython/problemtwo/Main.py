

alloprtr = ['+','-', '*', '/']

digitAll = ['1','2','3','4','5','6','7','8','9','0']



opr = {}

oprator =[]

with open('op.txt','r') as  opr:

    for i in opr:

        i = i.replace('\n','')
        oprator.append(i)



print(oprator)


def writeTOfile(wr):
    with open('output.txt', 'a') as wrtf:

        wrtf.write(str(wr)+'\n')


with open('in.txt','r') as oprand:

    j=0;

    for i in  oprand:
        i = i.replace('\n','')
        x = i.split()



        if oprator[j] not  in alloprtr:
           y= 'error input'

        elif x[0] not in digitAll or x[1] not in digitAll:
            y = 'error input'

        elif oprator[j] == '+':
            y = int(x[0]) + int(x[1])


        elif oprator[j] == '-':
            y = int(x[0]) - int(x[1])


        elif oprator[j] == '*':
            y = int(x[0]) * int(x[1])


        elif oprator[j] == '/':
            y = int(x[0]) / int(x[1])

        writeTOfile(y)

        j +=1

