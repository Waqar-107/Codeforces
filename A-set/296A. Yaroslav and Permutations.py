#from dust i have come, dust i will be

n=int(input())
a=list(map(int,input().split()))

dict={}

for i in range(n):
    try:
        x=dict[a[i]]
        dict[a[i]]+=1
    except:
        dict[a[i]]=1

    if dict[a[i]]>(n+1)//2:
        print("NO")
        exit(0)

print("YES")

