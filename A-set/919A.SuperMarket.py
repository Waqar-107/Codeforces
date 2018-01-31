#from dust i have come dust i will be

n,m=map(int,input().split())

mn=1000000
for i in range(n):
    a,b=map(int,input().split())

    x=(a*m)/b
    mn=min(mn,x)

print(round(mn,10))

