

print(int('2\n'))

i=0


with open('input.txt', 'w') as wf:
    while i < 3:
        x = input('input number :')

        wf.write(str(x)+'\n')

        i +=1


with open('input.txt','r') as wr:
    line =  wr.readlines()


with open('output.txt','w') as wf:
        for i in line:
            print(int(i))
            wf.write(str(x) + '\n')


