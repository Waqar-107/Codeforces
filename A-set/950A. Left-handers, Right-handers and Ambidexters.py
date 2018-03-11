# from dust i have come dust i will be

l,r,a=map(int,input().split())

mx=0
for i in range(a+1):
    tl=l+i
    tr=r+a-i

    mx=max(mx,min(tl,tr)*2)

print(mx)
