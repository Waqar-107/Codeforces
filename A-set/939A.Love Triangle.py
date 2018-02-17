# from dust i have come dust i will be

n=int(input())
x=list(map(int,input().split()))

for i in range(n):
    a=i+1
    b=x[a-1]
    c=x[b-1]

    if x[c-1]==a:
        print("YES")
        exit(0)

print("NO")
