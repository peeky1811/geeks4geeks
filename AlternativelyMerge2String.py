a=input()
b=input()
la=len(a)
lb=len(b)
if(la>lb):
    result=""
    for i in range(0,lb):
        result+=a[i]
        result+=b[i]
    result+=a[lb:]
    print(result)
else:
    result=""
    for i in range(0,la):
        result+=a[i]
        result+=b[i]
    result+=b[la:]
    print(result)
