# from dust i have come dust i will be

import sys

n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))

ans=[None]*(n+100)
for i in range(n):
    ans[a[i]]=b[i]

for i in range(1,n+1):
    sys.stdout.write(str(ans[i])+" ")
