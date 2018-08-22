# from dust i have come, dust i will be

x=[]
for i in range(3):
    a,b,c=map(int,input().split())
    s=a+b+c-(min(a,b,c)+max(a,b,c))

    x.append(s)

x.sort()
print(x[1])

