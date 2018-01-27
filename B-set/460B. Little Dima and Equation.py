#from dust i have come dust i will be

def sum(n):
    s=0
    while n>0:
        r=n%10
        n=n//10

        s+=r

    return s

a,b,c=map(int,input().split())

f=[]
for i in range(1,81):
    x=b*pow(i,a)+c

    if x>1000000000:
        break

    if sum(x)==i:
        f.append(x)

print(len(f))
for i in range(len(f)):
    print(f[i],end=' ')
