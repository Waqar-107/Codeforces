#"from dust i have come, dust i will be"

n,k=map(int,input().split())
a=list(map(str,input().split()))

count=0
for i in range(n):
    c=0
    for j in range(len(a[i])):
        if a[i][j]=='4' or a[i][j]=='7':
            c+=1

    if c<=k:
        count+=1

print(count)

