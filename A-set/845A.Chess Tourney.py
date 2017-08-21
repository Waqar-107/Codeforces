#"from dust i have come, dust i will be"

n=int(input())
a=list(map(int,input().split()));

a.sort(reverse=True)
x=[]
y=[]

for i in range(n):
    x.append(a[i])

for i in range(n,n*2):
    y.append(a[i])

for i in range(n):
    for j in range(n):
        if x[i]==y[j]:
            print("NO")
            exit(0)

print("YES")


