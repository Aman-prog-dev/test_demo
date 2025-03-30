num=int(input("enter a number:- "))
powe=int(input("enter the number of power:- "))
c=1
for i in range(1,powe+1):
    c*=num
print("The number",num,"of power ",powe,":- ",c)