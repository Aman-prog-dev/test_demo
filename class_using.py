## class to demostreate method  overriding ###
# class animal:
#     def sound(self):
#         return "hello world"
        
# class dog(animal):
#     def sound(self):
#         return "wooh!"

# animals=[animal(),dog()]
# for animal in animals:
#     print(animal.sound())

# ## calling to function in using tuple ####
# class chef:
#     def activity(self):
#         return "hi"
# class art:
#     def activity(self):
#         return 'haha'
# chef=chef()
# art=art()
# profess=(chef,art)
# for prof in profess:
#     print(prof.activity())

### abstact method ###
# from abc import ABC
# class animal(ABC):
#     def sound(self):
#         pass
# class dog(animal):
#     def sound(self):
#         return 'hello'
# animal=animal()
# dog=dog()
# print(dog.sound())

### data hiding using encapsulation ###
# class employs:
#     def __init__(self,name,project,salary):
#         self.name=name
#         self.project=project
#         self.salary=salary

# employes=employs('aman','web desing',100000)
# print(employes.name)
# print(employes.project)
# print(employes.salary)