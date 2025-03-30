###primt & not prime###
num=int(input("enter a number:- "))
form=int(num/2)+1
for i in range(2,form):
    c=num%i
    if c==0:
        print("not prime")
        break
else:
    print("prime")