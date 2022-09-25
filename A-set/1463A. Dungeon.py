# from dust i have come, dust i will be

t = int(input())

for _ in range(t):

    a, b, c = map(int, input().split())

    k = (a + b + c) / 9

    if k//1 - k == 0:
        if a < k or b < k or c < k:
            print("NO")
        else:
            print("YES")
    else:
        print("NO")