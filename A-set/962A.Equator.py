# from dust i have come dust i will be

n=int(input())
a=list(map(int,input().split()))

k=sum(a)

if k%2:
    k=k//2+1
else:
    k//=2

cnt=0
for i in range(n):
    cnt+=a[i]
    if cnt>=k:
        print(i+1)
        exit(0)
