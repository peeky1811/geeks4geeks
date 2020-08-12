#---Naive Approach---
def tripletSum(arr, n, sum):
    for i in range(n-2):
        for j in range(i+1,n-1):
            for k in range(j+1, n):
                if arr[i]+arr[j]+arr[k]==sum:
                    print(1)
                    return
    print(0)

for _ in range(int(input())):
    n,sum=[int(x) for x in input().split()]
    arr=list(map(int, input().split()))
    tripletSum(arr, n, sum)
    
#---Clever approach---
def tripletSum(arr, n, sum):
    for i in range(0,n-1):
    s=set()
        for j in range(i+1,n):
                if sum-(arr[i]+arr[j]) in s:
                    # print(arr[i],arr[j],sum-(arr[i]+arr[j]))
                    print(1)
                    return
    print(0)

for _ in range(int(input())):
    n,sum=[int(x) for x in input().split()]
    arr=list(map(int, input().split()))
    tripletSum(arr, n, sum)
