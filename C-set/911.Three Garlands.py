# from dust i have come dust i will be

k1,k2,k3=map(int,input().split())

a=[0]*1510

a[k1]+=1
a[k2]+=1
a[k3]+=1

if a[1]>=1 or a[2]>=2 or a[3]>=3 or (a[4]==2 and a[2]==1):
    print('YES')

else:
    print('NO')
