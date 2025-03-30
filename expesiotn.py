#####  define __str__() to print all the arguments without explicitly accessing .args ####
try:
    raise Exception('ram ', 'kumar')
except  Exception as ak:
    print(type(ak))
    print(ak.args)
    # or
    print(ak)
    a,b=ak.args
    print('first =  ',a)
    print('Second = ',b)
