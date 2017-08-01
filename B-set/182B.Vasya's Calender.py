#"from dust i have come, dust i will be"

d=int(input())
n=int(input())

a=list(map(int,input().split()))

ps=0;sum=0
for i in range(0,n):
    st=ps+1
    if(st==1):
        ps=a[i]
    else:
        lg=d-ps
        sum+=lg
        ps=a[i]

print(sum)
