#from dust i have come, dust i will be

n=int(input())
a=list(map(int,input().split()))

m=a[0]

for i in range(len(a)-1):
    x=a[i]
    m=max(m,x)
    for j in range(i+1,len(a)):
        x=x^a[j]
        m=max(m,x)


print(max(m,max(a)))
