import  os

with open('article.txt') as fobj:

    for i, line in  enumerate(fobj):

        print(i,line)



with open('names.txt') as fobj:
    line =fobj.readlines()



for i in  line:
    print(i)


#write to file

with open('one.txt','w+') as fobj:
    fobj.write('1\n')
    fobj.write('2\n')
    fobj.write('3\n')


with open('two.txt','w') as  fobj:
    fobj.write('orko')


with open('x.txt','a') as  fobj:
    fobj.write('orko')



if os.path.exists('abc.txt'):
    print('yes file exist')
else:
    print('not exist')

