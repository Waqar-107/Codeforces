# from dust i have come, dust i will be

n, m = map(int, input().split())

q = n//m
r = n % m
a = [q] * m


for i in range(r):
    a[i] += 1

for i in range(m):
    print(a[i], end=' ')
