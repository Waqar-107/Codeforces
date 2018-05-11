# from dust i have come, dust i will be

n=int(input())
a=list(map(int,input().split()))

v=[0]*n
curA=1
curB=int(1e6)
mx=0

for i in range(n):
    x=abs(curA-a[i])
    y=abs(curB-a[i])

    mx=max(mx,min(x,y))

print(mx)


