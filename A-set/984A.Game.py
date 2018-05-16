# from dust i have come, dust i will be

n=int(input())
a=list(map(int,input().split()))

a.sort(reverse=True)
print(a[n//2])
