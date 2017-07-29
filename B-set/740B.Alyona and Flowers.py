#"from dust i have come, dust i will be"

n,m=map(int,input().split());
a=list(map(int,input().split()))

b=[(list(map(int,input().split()))) for i in range(m)]

count=0
for i in range(m):
    sum=0;
    for j in range(b[i][0]-1,b[i][1]):
        sum+=a[j]

    if(sum>0):
        count+=sum


print(count)
