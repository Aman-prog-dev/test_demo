#### matrix list sort data ####
list1=[
    [1,2,3,4],
    [5,6,7,8],
    [9,4,5,6],
    ]
data=[[row[i] for row in list1]for i in range(4)]
data.sort()
print(data)
        Or
print(list(zip(*list1)))
