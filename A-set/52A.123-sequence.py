# from dust i have come dust i will be

n=int(input())
a=list(map(int,input().split()))

uno=0
dos=0
tres=0

for i in range(n):
    if a[i]==1:
        uno+=1
    elif a[i]==2:
        dos+=1
    else:
        tres+=1

print(uno+dos+tres-max(uno,dos,tres))
