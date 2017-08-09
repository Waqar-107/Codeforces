#"from dust i have come, dust i will be"

n,k=map(int,input().split())
a=list(map(int,input().split()))
b=list(map(int,input().split()))

b.sort(reverse=True)

j=0
for i in range(n):

    if j>=k:
        break

    if a[i]==0:
        a[i]=b[j]
        j+=1

j=0
for i in range(1,n):
    if a[i]==0:
        print("No")
        exit(0)

    if a[i]>a[i-1]:
        j+=1

if j==n-1:
    print("No")

else:
    print("Yes")



