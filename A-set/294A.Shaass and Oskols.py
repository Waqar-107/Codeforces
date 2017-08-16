#"from dust i have come, dust i will be"

n=int(input())
a=list(map(int,input().split()))

m=int(input())
w=[[0]*2 for i in range(m)]

for i in range(m):
    w[i][0],w[i][1]=map(int,input().split())

for i in range(m):

    left=w[i][1]-1
    right=a[w[i][0]-1]-w[i][1]

    if w[i][0]!=1:
        a[w[i][0]-2]+=left

    if w[i][0]!=n:
        a[w[i][0]]+=right

    a[w[i][0]-1]=0

for i in range(n):
    print(a[i])
