# from dust i have come dust i will be

n,p=map(int,input().split())
a=list(map(int,input().split()))

s=sum(a)
mx=0
t=0
for i in range(n-1):
    t+=a[i]
    x=(t%p)+(s-t)%p
    mx=max(mx,x)

print(mx)
