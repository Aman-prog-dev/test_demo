###factorial is a user base number###
a=1
fact=1
value1=int(input("enter the value of factorial:- "))
while a<value1+1:
    fact*=a
    a+=1
print("factorial is a",value1,":- ",fact)