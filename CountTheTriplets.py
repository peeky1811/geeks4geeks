#----optimised approach-----
def countTriplets(arr, n):
    count=0
    arr.sort()
    # print("arr", arr)
    start=0
    end=n-2
    for i in range(n-1,0,-1):
        start=0
        end=i-1
        while start<end:
            # print("count", count, "start:",start,"end:", end )
            # print("arr[start]+arr[end]",arr[start]+arr[end])
            if arr[start]+arr[end]==arr[i]:
                count+=1
                start+=1
                end-=1
            elif arr[start]+arr[end]<arr[i]:
                start+=1
            elif arr[start]+arr[end]>arr[i]:
                end-=1
    if count:
        print(count)
    else:
        print(-1)

for _ in range(int(input())):
    n=int(input())
    arr=list(map(int, input().split()))
    countTriplets(arr, n)
#---naive approach---
def countTriplets(arr, n):
    count=0
    arr.sort()
    # print("arr", arr)

    for i in range(n-1):
        for j in range(i+1,n):
            sum=arr[i]+arr[j]
            # print("arr[i]" ,arr[i] ,"arr[j]", arr[j],"Sum",sum)
            if sum in arr:
                count+=1
                # print("count", count)
    if count:
        print(count)
    else:
        print(-1)

for _ in range(int(input())):
    n=int(input())
    arr=list(map(int, input().split()))
    countTriplets(arr, n)
