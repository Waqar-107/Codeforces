# from dust i have come, dust i will be

n=int(input())
a=list(map(int,input().split()))

a.sort()

cnt=0
for i in range(1,n):
    cnt+=(a[i]-a[i-1]-1)

print(cnt)
