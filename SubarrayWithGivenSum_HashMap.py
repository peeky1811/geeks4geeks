def findsum(arr, n, given_sum):
    curr_sum=0
    Map={}
 
    for i in range(n):
        curr_sum+=arr[i]
        # print(curr_sum)
        if curr_sum==given_sum:
            print(0, i)
            return
        if curr_sum-given_sum in Map:
            print(Map[curr_sum-given_sum]+1, i)
            return
        Map[curr_sum]=i
        
        # print(Map)
    print(-1)

t=int(input())
for _ in range(t):
    n, givensum=[int(x) for x in input().split()]
    arr= list(map(int, input().split()))
    
    findsum(arr,n, givensum)
