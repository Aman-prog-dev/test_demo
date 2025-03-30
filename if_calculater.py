a=int(input("ENTER THE FIRST OPERAND"))
b=int(input("ENTER THE SECOND OPERAND"))
c=int(input("ENTER THE TYPE OF OPERATION TO BE DONE""\n""1 for ADDITION""\n""2 for SUBTRACTION""\n""3 for MULTIPLICATION""\n""4 for DIVISION" "\n"  "5 for powering first with second"))
if c==1:
    print(a+b)
elif c==2:
    print(a-b)
elif c==3:
    print(a*b)
elif c==4:
    print(a/b)
else:
    print(a**b)