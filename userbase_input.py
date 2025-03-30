##input user based program###
count=0
inp='yes'
while inp=='yes':
    value1=int(input("enter the value:- "))
    if value1<0:
        typ=input("type the second number yes & no:- ")
        break
    count+=1
    inp=input("want to enter more number? yes & no:- ")
else:
    print("finish the num!!1")