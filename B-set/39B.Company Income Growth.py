# from dust i have come dust i will be

n=int(input())
a=list(map(int,input().split()))

st=2000
x=1
ans=[]

for i in range(n):
    if a[i]==x:
        x+=1
        ans.append(st+i+1)

print(len(ans))
for i in ans:
    print(i,end=' ')
