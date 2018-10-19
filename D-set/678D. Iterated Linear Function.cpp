# from dust i have come, dust i will be

mod=int(1e9)+7

A,B,n,x=map(int,input().split())

'''
if we expand the given formula for some test cases 
e.g-> for n=2,3,4.. we get
A^n*x + B(A^0+A^1+...+A^{n-1})
for the geometric progression, 1+r+r^2+...+r^{n-1}
the ans=(r^n-1)/(r-1) when r>1, if r==1, ans=nr
'''

if n==0:
    print(x)
    exit(0)

if A==1:
    temp=n*A
else:
    '''
    (A/B)%m=(A%m*(B^-1)%m)%m
    '''
    x1=pow(A,n,mod)-1
    x2=pow(A-1,mod-2,mod)
    temp=(x1*x2)% mod

p1=pow(A,n,mod)*pow(x,1,mod)
p1=p1%mod

p2=(B%mod)*temp
p2=p2%mod

print((p1+p2)%mod)
