#from dust i have come dust i will be

n=int(input())
a=list(map(int,input().split()))

a.sort()

idx=1
for i in range(n):
    if idx==a[i]:
        idx+=1
    else:
        print(idx)
        exit(0)

print(idx)



