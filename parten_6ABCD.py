for row in range(65,70):
    for col in range(65,row+1):
        print(chr(col),end=' ')
    col+=1
    print()