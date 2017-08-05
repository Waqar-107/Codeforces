#"from dust i have come, dust i will be"

n,m,k=map(int,input().split())
a=list(map(int,input().split()))


mn=100000
for i in range(m,n):
    if(a[i]<=k and a[i]!=0):
        mn=(i-m+1)*10
        break

for i in range(m):
    if(a[i]<=k and a[i]!=0):
        x=(m-1-i)*10
        mn=min(mn,x)

print(mn)






