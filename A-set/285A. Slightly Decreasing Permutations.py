# from dust i have come, dust i will be

n, k = map(int, input().split())

i = 1
e = n - k - 1

while i <= e:
    print(i, end = ' ')
    i += 1

while k >= 0:
    print(n, end = ' ')
    n -= 1
    k -= 1
