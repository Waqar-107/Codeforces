# from dust i have come dust i will be

k=int(input())

if k>36:
    print(-1)
    exit(0)

if k==0:
    print(1)
    exit(0)

if k==1:
    print(6)
    exit(0)

for i in range(k//2):
    print(8,end='')

if k%2:
    print(0)
