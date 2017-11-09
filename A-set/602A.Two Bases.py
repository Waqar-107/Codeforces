#from dust i have come dust i will be

n,bx=map(int,input().split())
x=list(map(int,input().split()))

m,by=map(int,input().split())
y=list(map(int,input().split()))

px=pow(bx,n-1)
py=pow(by,m-1)

px=int(px)
py=int(py)

a=0
for i in range(n):
    a+=(x[i]*px)
    px//=bx

b=0
for i in range(m):
    b+=(y[i]*py)
    py//=by

#print(a,b)
if a==b:
    print('=')
elif a>b:
    print('>')
else:
    print('<')
