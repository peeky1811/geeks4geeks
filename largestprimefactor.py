#....factors of number n
def getFactors(n):
    
    factors=[]
    for i in range(1, int(math.sqrt(n)+1)):
        if n%i ==0:
            factors.append(i)
            factors.append(n//i)
    # print(factors)
    return factors

#....check if the number are prime
def isPrime(n):
    return len(getFactors(n))==2
    
#main function...to print the largest prime number    
t=int(input())
for _ in range(t):
    n=int(input())
    factors=getFactors(n)
    largestprimefactor=0
    for eachfactor in factors:
        if(isPrime(eachfactor) and eachfactor>largestprimefactor):
            largestprimefactor=eachfactor
    print(largestprimefactor)
