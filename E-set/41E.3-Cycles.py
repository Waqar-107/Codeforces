# from dust i have come, dust i will be

n=int(input())

adj=[[0]*(n+1) for i in range(n+1)]

if n<=3:
    if n==1:
        print(0)
    elif n==2:
        print(1)
        print(1,2)
    else:
        print(2)
        print(1,2)
        print(2,3)
    exit(0)

m=0
ans=[]

#make a cycle
for i in range(1,n):
    ans.append([i,i+1])
    adj[i][i+1]=1
    adj[i+1][i]=1

for i in range(1,n+1):
    for j in range(1,n+1):
        if i==j:
            continue

        elif adj[i][j]==1 or adj[j][i]==1:
            continue

        else:
            #see if there's a common node
            f=1
            for k in range(1,n+1):
                if adj[i][k]==1 and adj[j][k]==1:
                    f=0
                    break

            if f==1:
                adj[i][j]=1
                adj[j][i]=1
                ans.append([i,j])

print(len(ans))
for i in range(len(ans)):
    print(ans[i][0],ans[i][1])

