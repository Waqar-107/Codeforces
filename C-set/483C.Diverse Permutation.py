# from dust i have come dust i will be

n,k=map(int,input().split())

i=1
a=[]
for j in range(n//2):
    a.append(i)
    a.append(n-i+1)
    i+=1

if n%2==1:
    a.append(n//2+1)

for i in range(k):
    print(a[i],end=' ')

if k<n and a[k-1]>a[k]:
    s=a[k-1]-1
    for i in range(k,n):
        print(s,end=' ')
        s-=1

else:
    s=a[k-1]+1
    for i in range(k,n):
        print(s,end=' ')
        s+=1
