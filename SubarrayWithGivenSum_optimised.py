def findsum(arr, n, givensum):
    
    left=0
    right=0
    curr_sum=arr[0]
    # print("left=",left,"right=", right, "current sum=", curr_sum)
    while(left<=right):
        if curr_sum==givensum:
            print(left+1,right+1)
            return
        elif curr_sum>givensum:
            curr_sum-=arr[left]
            left=left+1
            # print("current sum=", curr_sum, "left=",left)
        elif curr_sum<givensum and right!=n-1:
            right=right+1
            curr_sum+=arr[right]
            # print("right=", right, "current sum=", curr_sum)
    print(-1)

t=int(input())
for _ in range(t):
    n, givensum=[int(x) for x in input().split()]
    arr= list(map(int, input().split()))
    
    findsum(arr,n, givensum)
