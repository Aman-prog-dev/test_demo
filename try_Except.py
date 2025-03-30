#### number input program in using try & except keyword using ####
while True:
    try:        #part of if conditions
        x = int(input("Please enter a number: "))
        if x==chr(x):
                x = int(input("Please enter a number: "))
        break
    except ValueError: #part of else condition
        print("Oops!  That was no valid number.  Try again...")
