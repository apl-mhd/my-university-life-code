sum = 100
num = 101

sum += num if num % 2 == 0 else 0


print(sum)


#list compression

num_squares = [v * v for  v in  range(0,10)]

print(num_squares)

num_squares2 = [ v*v for  v in range(1,10) if v%2 != 0 ]

print(num_squares2)

num_squaresD = {v: v*v for  v in range(1,10) if v%2 != 0 }

print(num_squaresD)

num_squaresS = { v*v for  v in range(1,10) if v%2 != 0 }


print(num_squaresS)




