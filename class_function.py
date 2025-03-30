####  instance variables are for data unique to each instance ####
class ram:
    kind='krishna'
    def __init__(self,name):
        self.name=name
s=ram('shyam')
h=ram("hari")
print(s.kind)
print(s.name)
print(h.name)
