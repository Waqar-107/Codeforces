# from dust i have come dust i will be

n=int(input())

a=[0]*(n+1)
for i in range(n-1):
    u,v=map(int,input().split())
    a[u]+=1
    a[v]+=1

cnt=0
for i in range(1,n+1):
    if a[i]==1:
        cnt+=1

print(cnt)
