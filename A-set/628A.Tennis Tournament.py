# from dust i have come, dust i will be

import math

def highestPowerOfTwo(n):
    p = int(math.log2(n))
    return int(math.pow(2, p))

n, b, p = map(int, input().split())

x = 0;
y = p * n
while n > 1:
    k = highestPowerOfTwo(n)
    x += (k * b + k//2)
    n -= (k // 2)

print(x, y)
