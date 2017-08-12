#"from dust i have come, dust i will be"

n=int(input())
s=str(input())

a=list(map(int,input().split()))

vis=[0]*n

i=0
while 1:

    if i<0 or i>=n:
        print("FINITE")
        exit(0)

    if vis[i]==1:
        print("INFINITE")
        exit(0)

    else:
        vis[i]=1
        if s[i]=='>':
            i+=a[i]
        else:
            i-=a[i]

