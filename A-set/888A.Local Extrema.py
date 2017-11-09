#from dust i have come dust i will be

n=int(input())
a=list(map(int,input().split()))

cnt=0
for i in range(1,n-1):
    if a[i]>a[i+1] and a[i]>a[i-1]:
        cnt+=1
    elif a[i]<a[i+1] and a[i]<a[i-1]:
        cnt+=1

print(cnt)
