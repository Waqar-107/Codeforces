#"from dust i have come, dust i will be"

n,k=map(int,input().split())

a=input()
l=list(map(int,a.split(' ')))

sum=0;
for i in range(0,n):
    sum+=l[i]

count=0
x=round(sum/n)
pp=(sum/n)-int(sum/n)
if(pp==0.5):
    x=(sum/n)+0.5

while(int(x)<k):
    sum+=k
    n+=1
    count+=1
    x=round(sum/n)

    pp=(sum/n)-int(sum/n)
    if(pp==0.5):
        x=(sum/n)+0.5


print(count)

