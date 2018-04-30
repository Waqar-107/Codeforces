# from dust i have come, dust i will be

n, m = map(int, input().split())

a = [0] * (n + 1)
for i in range(m):
    x, y = map(int, input().split())

    for j in range(x, y + 1):
        a[j] += 1

for i in range(1, n + 1):
    if a[i] > 1 or a[i]==0:
        print(i, a[i])
        exit(0)

print('OK')
