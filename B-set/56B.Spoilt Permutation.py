#from dust i have come dust i will be

n=int(input())
a=list(map(int,input().split()))

l,r=-1,-1
for i in range(n):
    if a[i]!=i+1:
        l=i
        break

for i in range(n-1,-1,-1):
    if a[i]!=i+1:
        r=i
        break

j=r+1

for i in range(l,r+1):
    if a[i]==j:
        j-=1
        continue
    else:
        print(0,0)
        exit(0)

print(l+1,r+1)
