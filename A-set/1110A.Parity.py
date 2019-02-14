# from dust i have come, dust i will be

b, k = map(int, input().split())
a = list(map(int, input().split()))

if b % 2 == 0:
    if a[k - 1] % 2 == 0:
        print('even')
    else:
        print('odd')

else:
    cnt = 0
    for i in range(k):
        if a[i] % 2 == 1:
            cnt += 1

    if cnt % 2 == 0:
        print('even')
    else:
        print('odd')
