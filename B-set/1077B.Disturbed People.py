# from dust i have come, dust i will be

n = int(input())
a = list(map(int, input().split()))

cnt = 0
for i in range(1, n - 1):
    if a[i] == 0 and a[i - 1] == 1 and a[i + 1] == 1:
        cnt += 1
        a[i + 1] = 0

print(cnt)
