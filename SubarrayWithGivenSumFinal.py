def findsum(arr, n, given_sum):
    curr_sum=start=0
    for i in range(n):
        curr_sum+=arr[i]
        while curr_sum>given_sum:
            curr_sum-=arr[start]
            start+=1
        if curr_sum==given_sum:
            print(start+1, i+1)
            return
    print(-1)

t=int(input())
for _ in range(t):
    n, givensum=[int(x) for x in input().split()]
    arr= list(map(int, input().split()))
    
    findsum(arr,n, givensum)
