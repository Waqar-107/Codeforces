#"from dust i have come, dust i will be"

n=int(input())
a=list(map(int,input().split()))

mx=10000
for i in range(1,n-1):
    if mx>=abs(a[i+1]-a[i-1]):
        mx=abs(a[i+1]-a[i-1])
        idx=i;

m=0;
for i in range(1,n):
    m=max(m,abs(a[i]-a[i-1]))

m=max(m,abs(a[idx+1]-a[idx-1]))

print(m)
