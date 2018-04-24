# from dust i have come, dust i will be

n=int(input())

fib=[0]*(n+10)

fib[1]=1;fib[2]=1
for i in range(3,n+10):
    fib[i]=fib[i-1]+fib[i-2]

s=sum(fib[1:n+1])
print(s)
