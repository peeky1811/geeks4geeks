t=int(input())
for _ in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    dic={}
    for i in l:
            if i in dic:
                dic[i]+=1
            else:
                dic[i]=1
    # print(dic)
    max=0
    for i in range(len(l)):
        if(l[i]>max):
            max=l[i] #max element
    # print(max)
    
    dic.pop(max)
    # print(dic)
    max=0
    for i in dic:
        if i>max:
            max=i  #second maximum element
    print(max)
