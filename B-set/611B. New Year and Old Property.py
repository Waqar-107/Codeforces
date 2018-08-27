# from dust i have come, dust i will be

n,m=map(int,input().split())

cnt=0
for i in range(2,65):
    #i denotes quantity of bits
    #if jth bit is 1
    y=pow(2,i)
    for j in range(i-1):
        #x is the number having 1 in jth bit
        #but we need the vice versa
        z=pow(2,j)
        x=y-z-1

        if x>=n and x<=m:
            cnt+=1
            #print(i,bin(z),bin(x))

print(cnt)
