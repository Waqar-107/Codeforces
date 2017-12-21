#from dust i have come dust i will be

n=int(input())
a=[]*n

idx=-1
for i in range(n):
    a.append(list(map(int,input().split())))

    cnt=0
    for j in range(n):
        cnt+=a[i][j]

    if cnt==n-1:
        idx=i

vis=[0]*n
vis[idx]=1

for i in range(2,n+1):
    for j in range(n):

        if vis[j]:
            continue

        t=set()
        for k in range(n):
            if vis[k]==0 and a[j][k]>0:
                t.add(a[j][k])

        if len(t)==1:
            vis[j]=i
            break

for i in range(n):
    if(vis[i]==0):
        print(n,end=" ")
    else:
        print(vis[i],end=" ")
