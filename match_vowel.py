###match program###
value=input("enter the alphabats:- ")
match value:
    case 'a'|'e'|'i'|'o'|'u'|'A'|'E'|'I'|'O'|'U':
        print("VOWEL")
    case _:
        print("NOT VOWEL")
        
        
        
'''v=int(input("number:- "))
match v:
    case 1:
        print("hey")
    case 2:
        print("hello")
    case _:
        print("try again")'''