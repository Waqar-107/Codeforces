#"from dust i have come, dust i will be"

n,m=map(int,input().split())

arr=[list(map(int,input().split())) for r in range(n)]

a,b=map(int,input().split())

mx=10000000;
for i in range(n-a+1):
    for j in range(m-b+1):
        count=0;
        for w in range(i,i+a):
            for e in range(j,j+b):
                count+=arr[w][e]

        mx=min(mx,count)


for i in range(n-b+1):
    for j in range(m-a+1):
        count=0;
        for w in range(i,i+b):
            for e in range(j,j+a):
                count+=arr[w][e]

        mx=min(mx,count)

print(mx)
