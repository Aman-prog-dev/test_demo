###-loop prime numbers###
value1=int(input("entre the end of prime numbers:- "))
for row in range(2,value1+1):
    for column in range(2,row):
        if row%column==0:
            row//column
            break
    else:
        print(row,"is a pime number")