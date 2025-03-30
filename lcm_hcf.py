a=20
b=10
if a>b:
    small=b
else:
    small=a
for i in range(1,small+1):
    if a%i==0 and b%i==0:
        hcf=i
    lcm=(a*b)/hcf
print("nuber is hfc:- ",hcf)
print("number is lcm:- ",lcm)