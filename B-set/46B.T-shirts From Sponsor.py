#from dust i have come dust i will be

a=list(map(int,input().split()))
sz=["S","M","L","XL","XXL"]

k=int(input())

for i in range(k):
    s=input()

    for j in range(len(sz)):
        if s==sz[j]:
            x=j
            break

    if a[x]>0:
        a[x]-=1
        print(sz[x])

    else:
        for j in range(1,5):
            #print(x+j,x-j)
            if x+j<5 and a[x+j]>0:
                print(sz[x+j])
                a[x+j]-=1
                break

            elif x-j>=0 and a[x-j]>0:
                print(sz[x-j])
                a[x-j]-=1
                break
