# from dust i have come dust i will be

class pair:
    def __init__(self,w,h):
        self.w=w
        self.h=h

n=int(input())
a=[pair]*n

for i in range(n):
    w,h=map(int,input().split())
    a[i]=pair(w,h)

curr=min(a[n-1].w,a[n-1].h)
for i in range(n-2,-1,-1):
    if max(a[i].w,a[i].h)<curr:
        print('NO')
        exit(0)

    if min(a[i].w,a[i].h)>=curr:
        curr=min(a[i].w,a[i].h)
    else:
        curr=max(a[i].w,a[i].h)

print('YES')

