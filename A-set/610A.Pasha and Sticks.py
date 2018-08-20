# from dust i have come, dust i will be

n=int(input())

if n%2==1:
    print(0)
    exit(0)

n=n//2
if n%2==0:
    n-=1

print(n//2)
