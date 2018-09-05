# from dust i have come, dust i will be

n=int(input())
x=list(map(int,input().split()))

a=set()
for i in range(n):
    if x[i]!=0:
        a.add(x[i])

print(len(a))
