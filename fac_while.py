num=int(input("enter the numer to facter:- "))
i=2
while i<num+1:
    if num%i==0:
        print(i,end=" ")
    i+=1