#"from dust i have come, dust i will be"

n=int(input())
m=[[None]*2 for i in range(3)]

for i in range(3):
    m[i][0],m[i][1]=map(int,input().split())

a=m[0][0];b=m[1][0];c=m[2][0]
n-=(a+b+c)

#take the first diploma
x=min(n,m[0][1]-m[0][0])
a+=x;n-=x;

if n<0:
    n=0
    
#take the second diploma
x=min(n,m[1][1]-m[1][0])
b+=x;n-=x;

if n<0:
    n=0

#take the third
x=min(n,m[2][1]-m[2][0])
c+=x;n-=x;

print(a,b,c)


