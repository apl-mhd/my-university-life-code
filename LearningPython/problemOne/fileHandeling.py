




name =[]


with open('output.txt','a') as obw:

    obw.write('a\n')



with open('output.txt','r') as r:

    for i in  r:

        name.append(i)



name[0] = name[0][0:len(name[0])-1]
print(len(name[0]))

print(name)