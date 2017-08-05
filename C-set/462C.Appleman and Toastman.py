#"from dust i have come, dust i will be"

n=int(input())
a=list(map(int,input().split()))

f=0
sum=0;count=0
for i in range(n):
    sum+=a[i]

a.sort(reverse=True)

while(len(a)):
    #toast
    count+=(sum+f)

    #apple
    f=a.pop()
    sum-=f

print(count)






