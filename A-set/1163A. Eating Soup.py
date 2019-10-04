# from dust i have come, dust i will be

n, m = map(int, input().split())

if m == 0:
    print(1)
    exit(0)

if n % 2 == 0:
    if m < n // 2:
        print(m)
    else:
        print(max(0, n - m))

else:
    if m < n // 2 + 1:
        print(m)
    else:
        print(max(0, n - m))
