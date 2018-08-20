# from dust i have come, dust i will be

import math

n = int(input())

a = 1
b = n

m=int(math.sqrt(n))

for i in range(1, m+1):

    x = i
    if n % x == 0:
        y = n // x
        if b - a > y - x:
            a = x
            b = y

print(a, b)
