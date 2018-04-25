# from dust i have come, dust i will be

n,m=map(int,input().split())

a=[""]*(m+1)
for i in range(1,m+1):
    a[i]=input()

if n%m==0:
    print(a[m])

else:
    print(a[n%m])
