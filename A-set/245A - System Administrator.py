# from dust i have come dust i will be

n=int(input())

ax=0;bx=0
ay=0;by=0

for i in range(n):
    t,x,y=map(int,input().split())

    if t==1:
        ax+=x
        ay+=y
    else:
        bx+=x
        by+=y

if ax>=(ax+ay)//2:
    print('LIVE')
else:
    print('DEAD')

if bx>=(bx+by)//2:
    print('LIVE')
else:
    print('DEAD')
