#from dust i have come dust i will be

n=int(input())

if n<=2:
    print(-1)
    exit(0)

print(2,n,end=' ')
for i in range(1,n):
    if i!=2:
        print(i,end=' ')
