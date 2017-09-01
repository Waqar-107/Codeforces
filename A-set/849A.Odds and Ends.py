#from dust i have come dust i will be

n=int(input())
a=list(map(int,input().split()))

if len(a)%2==1 and a[0]%2==1 and a[n-1]%2==1:
    print("Yes")

else:
    print("No")

