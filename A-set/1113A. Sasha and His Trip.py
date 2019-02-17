# from dust i have come, dust i will be

n, v = map(int, input().split())

cnt = min(v, n - 1)
tel = cnt

for i in range(2, n):
    tel -= 1
    rasta = n - i

    if tel < rasta:
        x = min(v - tel, rasta)

        tel += x
        cnt += x*i

print(cnt)
