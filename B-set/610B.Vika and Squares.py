#from dust i have come dust i will be

n=int(input())
a=list(map(int,input().split()))

m=min(a)
v=[]

for i in range(n):
    if a[i]==m:
        idx=i
        v.append(i);


cnt=m*n;

mi=0
for i in range(1,len(v)):
    mi=max(mi,v[i]-v[i-1]-1)

mi=max(mi,n-(v[len(v)-1]-v[0]+1))

print(mi+cnt)


