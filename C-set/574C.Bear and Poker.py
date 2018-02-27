# from dust i have come dust i will be

n=int(input())
a=list(map(int,input().split()))
s=set(a)
x=set()

for i in s:
    while i>=1:
        if i%2==0:
            i//=2
        elif i%3==0:
            i//=3
        else:
            x.add(i)
            break

if len(x)==1:
    print('Yes')

else:
    print('No')
