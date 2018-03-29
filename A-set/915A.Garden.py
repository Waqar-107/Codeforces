# from dust i have come dust i will be

n,k=map(int,input().split())
a=list(map(int,input().split()))

a.sort()

ans=0
for i in a:
    if k%i==0:
        ans=k//i

print(ans)
