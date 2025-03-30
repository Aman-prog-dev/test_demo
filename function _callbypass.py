### funciton call by pass function ###
def count():
    num=0
    def incrementer():
        nonlocal num
        num+=1
        return num
    return incrementer
c=count()
print(c())
print(c())
print(c())
print(c())
