ans='y'
count=0
add=0
while ans=='y':
    num=int(input("enter a number:- "))
    if num<0:
        typ=input("type the second number yes & no:- ")
        break
    count+=1
    add+=num
    ans=input("want to enter more number? yes & no:- ")
print("number of count:- ",count)
print("sum of numbers:- ",add)
