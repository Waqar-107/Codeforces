# from dust i have come dust i will be

n=int(input())
a=list(map(int,input().split()))

tot=sum(a)
a.sort()

cnt=0
for i in range(n):
    if tot/n>=4.5:
        print(cnt)
        exit(0)

    if a[i]<5:
        cnt+=1
        tot+=(5-a[i])

print(cnt)
