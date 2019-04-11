# from dust i have come, dust i will be

import bisect

n, m = map(int, input().split())

T = [0] * n
for i in range(n):
    t, c = map(int, input().split())
    T[i] = t * c

m = list(map(int, input().split()))

for i in range(1, n):
    T[i] += T[i - 1]

for i in range(len(m)):
    i = bisect.bisect_left(T, m[i], 0, n)
    print(i + 1)
