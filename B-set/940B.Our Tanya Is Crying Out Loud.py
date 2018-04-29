# from dust i have come, dust i will be

n=int(input())
k=int(input())
A=int(input())
B=int(input())

if k==1:
    n-=1
    print(n*A)
    exit(0)

cnt=0
while n>1:

    if n<k:
        x=n-1
        cnt+=(x*A)
        break
    
    r=n%k

    if r!=0:
        cnt+=(A*r)
        n-=r
    else:
        x=n-n//k
        cnt+=min(B,x*A)
        n//=k

print(cnt)


