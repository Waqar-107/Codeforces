# from dust i have come, dust i will be

t=int(input())

while t>0:
    t-=1
    n,l,r=map(int,input().split())

    k=n//l

    if r*k>=n:
        print('Yes')
    else:
        print('No')
