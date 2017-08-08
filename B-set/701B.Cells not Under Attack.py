#"from dust i have come, dust i will be"

import sys

n,m=map(int,input().split())
arr=[list(map(int,input().split())) for i in range(m)]

row={}
col={}

for i in range(1,n+1):
    row[i]=0
    col[i]=0

r=n;c=n
for i in range(m):
    if row.get(arr[i][0])==0:
        row[arr[i][0]]=1
        r-=1

    if col.get(arr[i][1])==0:
        col[arr[i][1]]=1
        c-=1

    k=(r*c)
    sys.stdout.write(str(k)+" ")

