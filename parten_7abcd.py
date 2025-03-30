for row in range(97,102):
    for col in range(97,row+1):
        print(chr(row),end=' ')
    col+=1
    print()