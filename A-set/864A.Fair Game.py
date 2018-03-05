# from dust i have come dust i will be

n=int(input())

a=[0]*101
for i in range(n):
    m=int(input())

    a[m]+=1

x=-1;xc=0
y=-1;yc=0

for i in range(1,101):
    if a[i]:
        if x==-1:
            x=i
            xc=a[i]
        elif y==-1:
            y=i
            yc=a[i]
        else:
            print('NO')
            exit(0)

if x!=-1 and y!=-1 and xc==yc:
    print('YES')
    print(x,y)
else:
    print('NO')
