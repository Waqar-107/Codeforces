#from dust i have come dust i will be

import sys

n=int(input())
a=[[""]*2 for i in range(n)]

for i in range(n):
    a[i][0],a[i][1]=map(str,input().split())


p=list(map(int,input().split()))


fin=[""]*n
fin[0]=min(a[p[0]-1][0],a[p[0]-1][1])


for i in range(1,n):
    f=a[p[i]-1][0]
    s=a[p[i]-1][1]

    if f<fin[i-1] and s<fin[i-1]:
        print("NO")
        exit(0)

    elif min(f,s)<fin[i-1] and max(f,s)>fin[i-1]:
        fin[i]=max(f,s)

    elif f>=fin[i-1] and s>=fin[i-1]:
        fin[i]=min(f,s)

print("YES")
