# from dust i have come, dust i will be

import math

n, r = map(int, input().split())

angle = (360 / n) / 2
angle = angle * math.pi / 180

ans = (r * math.sin(angle)) / (1 - math.sin(angle))
print(ans)
