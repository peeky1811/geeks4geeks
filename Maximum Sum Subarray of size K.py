
#----optimum approach-sliding window---
def maxSum(a,n,k):
    if n<k:
        return -1
    
    max_sum=0
    window_sum=0
    window_start=0
    for window_end in range(n):
        window_sum+=a[window_end]
        if window_end>=k-1:
            max_sum=max(max_sum,window_sum)
            window_sum-=a[window_start]
            window_start+=1
    return max_sum   

#----brute force 2
def maxSum(a,n,k):
    if n<k:
        return -1
    
    max_sum=0
    for i in range(n-k+1):
        window_sum=0
        for j in range(i,i+k):
            window_sum+=a[j]
        max_sum=max(max_sum,window_sum)
    return max_sum
               
#----brute force 1
def maxSum(a,n,k):
    if n<k: #corner case
        return -1
    l=[]
    for i in range(n-k+1):
        sum=0
        for j in range(i,i+k):
            sum+=a[j]
        if sum not in l:
            l.append(sum)
    return max(l)
            
for _ in range(int(input())):
    n, k = map(int, input().split())
    a= list(map(int, input().split()))
    print(maxSum(a,n,k))    
