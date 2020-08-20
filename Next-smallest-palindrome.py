import sys
def inc(left):
    leftlist=list(left)
    end=len(leftlist)-1
    while leftlist[end]=='9':
        leftlist[end]='0'
        end-=1
    leftlist[end]=str(int(leftlist[end])+1)
    return "".join(leftlist)
    
def next_smallest_pal(num):
    num="".join(num)
    size=len(num)
    odd=size%2
    if odd:
        center=num[size//2]
    else:
        center=''
    left=num[:size//2]
    right=left[::-1]
    palindrome=left+center+right
    
    if palindrome>num:
        palindrome=" ".join(list(palindrome))
        return (palindrome)
    else:
        if center:
            if center<'9':
                center=str(int(center)+1)
                palindrome=left+center+right
                palindrome=" ".join(list(palindrome))
                return (palindrome)

            else:
                center='0'
        
        if left==len(left)*'9':
            palindrome='1'+(len(num)-1)*'0'+'1'
            palindrome=" ".join(list(palindrome))
            return (palindrome)

        else:
            left=inc(left)
            right=left[::-1]
            palindrome=left+center+right
            palindrome=" ".join(list(palindrome))
            return (palindrome)

t=int(input())
for _ in range(t):
    n=int(input())
    num=input().split()
    print(next_smallest_pal(num))
