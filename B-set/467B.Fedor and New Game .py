#"from dust i have come, dust i will be"

import sys

def toBinary(n,size):
    s=[]
    while 1:
        r=n%2
        n=n//2
        s.append(r)

        if n==0:
            break


    while len(s)<size:
        s.append(0)

    s.reverse()
    return s


n,m,k=map(int,input().split())
a=[0]*(m+1)

for i in range(m+1):
    a[i]=int(input())

fedor=[0]*n
fedor=toBinary(a[m],n)

cnt=0
for i in range(m):
    x=toBinary(a[i],n)

    sum=0
    for j in range(n):
        if fedor[j]!=x[j]:
            sum+=1

    if sum<=k:
        cnt+=1

print(cnt)



