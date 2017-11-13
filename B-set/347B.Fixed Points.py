#from dust i have come dust i will be

n=int(input())
a=list(map(int,input().split()))

cnt=0
dict={}

for i in range(n):
    if a[i]==i:
        cnt+=1

    else:
        dict[a[i]]=1

#try +=2
for i in range(n):
    if a[i]!=i and a[i]<n:
        if a[a[i]]==i:
            print(cnt+2)
            exit(0)


#try +=1
for i in range(n):
    if a[i]!=i:
        if dict[i]==1:
            print(cnt+1)
            exit(0)

print(cnt)
