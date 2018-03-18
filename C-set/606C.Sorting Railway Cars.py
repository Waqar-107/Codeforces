# from dust i have come dust i will be

n=int(input())
a=list(map(int,input().split()))

mp=[0]*(n+1)

for i in range(n):
    mp[a[i]]=i+1

cnt=0;mx=1
for i in range(1,n):
    if mp[i]<mp[i+1]:
        cnt+=1

    else:
        mx=max(mx,cnt+1)
        cnt=0

mx=max(mx,cnt+1)
print(n-mx)
