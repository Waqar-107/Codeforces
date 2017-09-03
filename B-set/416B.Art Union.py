#from dust i have come dust i will be

import sys

m,n=map(int,input().split())
a=[[]*n for i in range(m)]

for i in range(m):
    a[i]=list(map(int,input().split()))

for i in range(1,m):
    a[i][0]+=a[i-1][0]

for i in range(1,n):
    a[0][i]+=a[0][i-1]

for i in range(1,m):
    for j in range(1,n):
        a[i][j]+=max(a[i-1][j],a[i][j-1])

for i in range(m):
    sys.stdout.write(str(a[i][n-1])+" ")



