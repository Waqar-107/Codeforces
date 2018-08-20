# from dust i have come, dust i will be

n=int(input())

if n<=2:
    print(n)
    exit(0)

if n%2==1:
    print(n*(n-1)*(n-2))

else:
    if n%3!=0:
        print(n*(n-1)*(n-3))
    else:
        n-=1
        print(n*(n-1)*(n-2))
