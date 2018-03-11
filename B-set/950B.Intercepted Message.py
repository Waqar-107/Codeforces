# from dust i have come dust i will be

n,m=map(int,input().split())

a=list(map(int,input().split()))
b=list(map(int,input().split()))

cnt=0
x=0;y=0
i=0;j=0

f=-1
while i<n and j<m:

    if f!=1:
        x+=a[i]

    if f!=2:
        y+=b[j]

    if x==y:
        cnt+=1
        i+=1
        j+=1
        f=-1

    elif x>y:
        j+=1
        f=1

    else:
        i+=1
        f=2

print(cnt)
