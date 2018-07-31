#from dust i have come, dust i will be

n=int(input())
x=list(map(int,input().split()))
y=list(map(int,input().split()))

cx=sum(x)
cy=sum(y)

if cy>cx:
    print('No')

else:
    print('Yes')
