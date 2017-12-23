#from dust i have come dust i will be

n=int(input())
a=list(map(int,input().split()))

x=0
y=0
z=0

for i in range(n):
    if a[i]%3==0:
        x+=1
    elif a[i]%3==1:
        y+=1
    else:
        z+=1

t=(x//2)+min(y,z)
print(t)
