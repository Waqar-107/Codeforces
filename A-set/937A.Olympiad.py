# from dust i have come, dust i will be

n=int(input())
a=list(map(int,input().split()))

s=set()
for i in range(n):
    if a[i]>0:
        s.add(a[i])

print(len(s))
