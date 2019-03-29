with open('article.txt') as fobj:

    for i, line in  enumerate(fobj):

        print(i,line)



with open('names.txt') as fobj:
    line =fobj.readlines()



for i in  line:
    print(i)





