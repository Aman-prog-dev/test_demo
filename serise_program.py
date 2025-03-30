### 1+x/1!+x2/2!+.......xn/n!... ###
import math
a=1
b=2
s=1.0
for i in range(1,b+1):
    s+=math.pow(a,i)/math.factorial(i)
print(s)