# from dust i have come, dust i will be

import math as m

n=int(input())
a=list(map(int,input().split()))

v=[]
a.sort()

for i in range(1,n):
    v.append(a[i]-a[i-1])

g=0
for i in range(n-1):
    g=m.gcd(g,v[i])

cnt=0
for i in range(n-1):
    y=v[i]-1
    cnt+=(y//g)

print(cnt)

