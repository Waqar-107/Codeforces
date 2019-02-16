# from dust i have come, dust i will be

c, v0, v1, a, l = map(int, input().split())

cur = 0
d = 0
while cur < c:
    if d > 0:
        cur -= l
        cur = max(cur, 0)

    d += 1
    cur += min(v0, v1)
    v0 += a

print(d)
