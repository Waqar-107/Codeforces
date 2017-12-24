#from dust i have come dust i will be

n=int(input())
a=list(map(int,input().split()))

o=[]

cnt=0
for i in range(n):
    if a[i]%2==1:
        o.append(a[i])

    cnt+=a[i]

if len(o)==0:
    print(0)
    exit(0)

o.sort(reverse=True)

idx=len(o)-1
while cnt>0 and len(o)>0:
    if cnt%2==0:
        cnt-=o[idx]
        idx-=1
        o.pop()

    else:
        break

print(cnt)
