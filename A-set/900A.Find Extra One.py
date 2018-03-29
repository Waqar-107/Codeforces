# from dust i have come dust i will be

n=int(input())

r=0;l=0
for i in range(n):
    x,y=map(int,input().split())

    if x>0:
        r+=1
    else:
        l+=1

if min(r,l)<=1:
    print('Yes')
else:
    print('No')
