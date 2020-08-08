for _ in range(int(input())):
    n,sum_=map(int, input().split())
    arr=list(map(int, input().split()))
    flag=0
    
    for i in range(len(arr)):
        subsum=arr[i]
        if subsum==sum_:
            print(i+1, i+1) # only i is sum_ so j will be i itself
            flag=1
            break
        elif subsum>sum_:
            continue    # i>sum_ so if we add anything to it, it will also be greater
        for j in range(i+1, len(arr)):
            subsum+=arr[j]
            if subsum==sum_:
                print(i+1, j+1)
                flag=1
                break
            elif subsum>sum_:
                break
        if flag==1: # break out of inner loop if first sum is found
            break
    if flag==0:
        print(-1)
                
