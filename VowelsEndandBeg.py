strArr=['aba','bcb','ece','aa','e','abcde']
queries=['1-3','2-6','2-2']
result=[]
vowels='aeiou'

for i in queries:
    beg,end=i.split('-')
    ctr=0
    for j in range(int(beg)-1,int(end)):
        if strArr[j][0] in vowels:
            if strArr[j][len(strArr[j])-1] in vowels:
                ctr+=1
    result.append(ctr)
print(result)
