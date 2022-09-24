import math

d, h, v, e = map(int, input().split())

drink_s = (4 * v) / (math.pi * (d**2))

if drink_s > e:
    print("YES")
    result = (h / (drink_s - e))
    print(round(result, 12))
else:
    print("NO")
