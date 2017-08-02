#"from dust i have come, dust i will be"
n,s=map(int,input().split())
a=list(map(int,input().split()))

a.sort()

sum=0
for i in range(0,n-1):
    sum+=a[i]

if(sum<=s):
    print("YES")
else:
    print("NO")
