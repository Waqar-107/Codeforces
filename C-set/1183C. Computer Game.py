# from dust i have come, dust i will be

q = int(input())

while q:
    q -= 1
    k, n, a, b = map(int, input().split())

    ans = (k - n * b)
    if ans % (a - b) != 0:
        ans = (ans // (a - b)) + 1
    else:
        ans //= (a - b)

    if ans <= 0:
        print(-1)

    else:
        ans -= 1
        if ans > n:
            ans = n

        print(ans)
