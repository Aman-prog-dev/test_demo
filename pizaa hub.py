fulpiz=int(999)
halfpiz=int(499)
amount=int(0)
name=input("enter your name:- ")
phone=input("enter your phone number:- ")
email=input("entre you email id:- ")
choise=print("entre your choise \n 1 is full size pizza \n 2 is half size pizza")
opt=int(input("entre your choise:- "))
if opt==1:
    qty=int(input("entre your quantity of full size pizza:- "))
    amount=print("amount is a :- ",fulpiz*qty)
    print("your order is a complited & 1 LTR coke is a free your order")
elif opt==2:
      qty=int(input("entre your quantity of half size pizza:- "))
      print("amount is a :-  ",halfpiz*qty)
      print("your order is a complited")
else:
    print(" try again please the process")
    
    
