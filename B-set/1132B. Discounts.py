# from dust i have come, dust i will be

n = int(input())
a = list(map(int, input().split()))
m = int(input())
q = list(map(int, input().split()))

cnt = sum(a)
a.sort(reverse=True)

for i in range(m):
    print(cnt - a[q[i] - 1])
