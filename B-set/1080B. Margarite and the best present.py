# from dust i have come, dust i will be

def getSum(n):
    x = n * (n + 1)
    x //= 2

    # a+(n-1)d
    # n/2{2a+(n-1)d}
    if n % 2 == 0:
        n -= 1

    n = (n + 1) // 2
    y = n * n

    return x - y * 2


q = int(input())
while q:
    q -= 1
    l, r = map(int, input().split())

    if l == 1:
        print(getSum(r))
    else:
        print(getSum(r)-getSum(l-1))
