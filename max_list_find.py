arr=[1,2,8,9,0]
max1=arr[0]
for i in range(1,len(arr),1):
    if arr[i]<max1:
        max1=arr[i]
print(max1)