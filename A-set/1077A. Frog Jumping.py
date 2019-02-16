# from dust i have come, dust i will be

q = int(input())
while q > 0:
    q -= 1
    a, b, k = map(int, input().split())

    x = (k // 2) * (a - b) + (k % 2) * a
    print(x)
