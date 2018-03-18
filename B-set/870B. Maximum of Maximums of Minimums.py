# from dust i have come dust i will be

n,k=map(int,input().split())
a=list(map(int,input().split()))

if k==1:
    print(min(a[0:n]))

elif k==2:
    print(max(a[0],a[n-1]))

else:
    print(max(a[0:n]))

