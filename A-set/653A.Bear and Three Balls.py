#from dust i have come, dust i will be

n=int(input())
a=list(map(int,input().split()))

a.sort()

for i in range(2,n):
    if abs(a[i]-a[i-1])<=2 and abs(a[i]-a[i-2])<=2 and abs(a[i-1]-a[i-2])<=2 and a[i]!=a[i-1] and a[i]!=a[i-2] and a[i-1]!=a[i-2]:
        print("YES")
        exit(0)

print("NO")
