# from dust i have come, dust i will be

t = int(input())
while t:
    t -= 1
    n = int(input())
    a = list(map(int, input().split()))

    dict = {}
    for i in range(3):
        dict[i] = 0

    for i in range(n):
        dict[a[i] % 3] += 1

    ans = dict[0]

    x = min(dict[1], dict[2])

    ans += x
    dict[1] -= x
    dict[2] -= x

    ans += dict[1] // 3
    ans += dict[2] // 3

    print(ans)
