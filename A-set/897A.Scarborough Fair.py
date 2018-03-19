# from dust i have come dust i will be

n,m=map(int,input().split())
s=input()

a=[None]*n
for i in range(n):
    a[i]=s[i]

for i in range(m):
    x=input().split(' ')

    l=int(x[0])
    r=int(x[1])

    for j in range(l-1,r):
        if a[j]==x[2]:
            a[j]=x[3]

for i in range(n):
    print(a[i],end='')
