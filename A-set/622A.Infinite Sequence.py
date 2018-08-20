# from dust i have come, dust i will be

n=int(input())

lo=0
hi=int(1e14)

mx=0
while lo<=hi:
    mid=(lo+hi)//2

    if n-(mid*(mid+1))//2>0:
        mx=max(mx,mid)
        lo=mid+1
    else:
        hi=mid-1

print(n-(mx*(mx+1))//2)
