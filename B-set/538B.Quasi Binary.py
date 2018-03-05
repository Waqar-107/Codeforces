# from dust i have come dust i will be

n=int(input())

a=[]
while n:
    m=n
    x=0;k=1
    while m:
        r=m%10
        m//=10

        if r:
            x+=(1*k)
        k*=10

    n-=x
    a.append(x)

print(len(a))
for i in range(len(a)):
    print(a[i],end=' ')
