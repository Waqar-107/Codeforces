#from dust i have come dust i will be

n=int(input())
a=int(input())
b=int(input())

cnt=1
r=n
qa,qb=0,0

while 1:
    if r>=a and qa<4:
        r-=a
        qa+=1

    if r>=b and qb<2:
        r-=b
        qb+=1

    if qa==4 and qb==2:
        print(cnt)
        exit(0)

    if (r<a or qa==4) and (r<b or qb==2):
        r=n
        cnt+=1
