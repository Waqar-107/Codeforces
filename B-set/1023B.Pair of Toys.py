# from dust i have come, dust i will be

n,k=map(int,input().split())

if n>=k:
    if k%2==0:
        k-=1

    print(k//2)
    exit(0)

ans=2*n-k
if ans<=0:
    print(0)

else:
    print((ans+1)//2)
