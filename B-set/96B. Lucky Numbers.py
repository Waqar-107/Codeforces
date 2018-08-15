# from dust i have come, dust i will be

import bisect

vec = set()

def gen(n):
    if n > 4444477777:
        return

    x = n * 10 + 4
    y = n * 10 + 7

    fc = 0; sc = 0; m = x
    while m:
        r = m % 10
        m //= 10

        if r == 4:
            fc += 1
        else:
            sc += 1

    if fc == sc:
        vec.add(x)

    fc = 0; sc = 0; m = y
    while m:
        r = m % 10
        m //= 10

        if r == 4:
            fc += 1
        else:
            sc += 1

    if fc == sc:
        vec.add(y)

    gen(x)
    gen(y)


n = int(input())
gen(0)

vec = sorted(vec)

i = bisect.bisect_right(vec, n)
if n in vec:
    print(n)
else:
    print(vec[i])

