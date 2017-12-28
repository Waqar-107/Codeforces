# from dust i have come dust i will be

n,p,q=map(int,input().split())
s=input()

x=0
while p*x<=n:
    if (n-p*x)%q==0:
        y=(n-p*x)//q

        print(x+y)

        l=0
        while x>0:
            x-=1
            for i in range(p):
                print(s[l],end='')
                l+=1
            print()

        while y>0:
            y-=1
            for i in range(q):
                print(s[l],end='')
                l+=1
            print()

        exit(0)

    x+=1

print(-1)
