 ###count the odd & even value###
count=0
value1=int(input("enter tha start value:- "))
value2=int(input("enter the end value:- "))
for i in range(value1,value2+1):
    if(i%2==0):
       count+=1
print("even num is:- ",count)
if(i%2==1):
    count+=1
print("odd num is:- ",count)