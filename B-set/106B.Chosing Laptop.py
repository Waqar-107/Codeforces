# from dust i have come dust i will be

class laptop:
    def __init__(self,speed,ram,hdd,cost):
        self.speed=speed
        self.ram=ram
        self.hdd=hdd
        self.cost=cost

n=int(input())
a=[laptop]*n

for i in range(n):
    s,r,h,c=map(int,input().split())
    a[i]=laptop(s,r,h,c)

x=[0]*n
for i in range(n):
    for j in range(n):
        if i!=j:
            if a[i].speed<a[j].speed and a[i].ram<a[j].ram and a[i].hdd<a[j].hdd:
                x[i]=1
                break

mn=int(1e12)
idx=-1

for i in range(n):
    if x[i]==0:
        if mn>a[i].cost:
            idx=i+1
            mn=a[i].cost

print(idx)
