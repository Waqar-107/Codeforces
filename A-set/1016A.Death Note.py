# from dust i have come, dust i will be

n, m = map(int, input().split())
a = list(map(int, input().split()))

cr = 0
for i in range(n):
    cnt = 0

    # carry
    if cr > a[i]:
        cr -= a[i]
        a[i] = 0
    elif cr > 0:
        cnt += 1
        a[i] -= cr
        cr = 0

    # in a fresh page
    if a[i]:
        cnt += a[i] // m
        cr = m - a[i] % m

    print(cnt)
