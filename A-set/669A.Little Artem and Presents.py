# from dust i have come, dust i will be

n=int(input())
ans=(n//3)*2
n=n%3

if n>0:
    ans+=1

print(ans)
