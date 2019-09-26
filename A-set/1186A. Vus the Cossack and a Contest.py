# from dust i have come, dust i will be

n, m, k = map(int, input().split())

m -= n
k -= n

if m >= 0 and k >= 0:
    print('Yes')
else:
    print('No')
