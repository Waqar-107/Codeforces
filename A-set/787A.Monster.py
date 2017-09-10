#from dust i have come dust i will be

a,b=map(int,input().split())
c,d=map(int,input().split())

for i in range(100101):

    x=b+a*i
    if x>=d and (x-d)%c==0:
        print(x)
        exit(0)

print("-1")










