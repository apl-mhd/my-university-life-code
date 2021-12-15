
inFile = open("orko.txt", "a+")
'''
print("name")
name = input()
inFile.write(name+" ")

print("email")
email = input()
inFile.write(email+" ")

print("phone:")
phone = input()
inFile.write(phone+" ")

print("deposit")
deposit = input()
inFile.write(deposit+" ")

inFile.write("\n")


'''
inFile.close()



space = " "


print("ID\t\t\t\t\t\tName\t\t\t\t\t\tEmail\t\t\t\t\tPhone \t\t\t\tDeposit  \n")
outFile = open("orko.txt", "r")
for line in outFile:
    for word in line.split():

       if word == "orko":
            print("Orion", end=(20 - len(word))*space+"\t")
       else:
           print(word, end=(20 - len(word)) * space + "\t")
    print("\n")
outFile.close()