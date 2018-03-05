# from dust i have come dust i will be

n=int(input())
a=list(map(int,input().split()))

mx=0
for i in range(n):
    for j in range(n):

        if j<i:
            continue
        #flip from i to j

        cnt=0
        for k in range(i):
            if a[k]:
                cnt+=1
        for k in range(i,j+1):
            if not a[k]:
                cnt+=1
        for k in range(j+1,n):
            if a[k]:
                cnt+=1
        
        mx=max(mx,cnt)

print(mx)
