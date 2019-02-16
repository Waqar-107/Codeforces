# from dust i have come, dust i will be

n, k = map(int, input().split())

# 2 5 8
x = (2 * n) // k
if 2 * n % k != 0:
    x += 1

y = (5 * n) // k
if 5 * n % k != 0:
    y += 1

z = (8 * n) // k
if 8 * n % k != 0:
    z += 1

print(x + y + z)
