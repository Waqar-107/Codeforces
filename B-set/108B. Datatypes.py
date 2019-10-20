# from dust i have come, dust i will be

n = int(input())
a = list(map(int, input().split()))

a = set(a)
a = sorted(a)

for i in range(len(a) - 1):
    if a[i] + a[i] > a[i + 1]:
        print('YES')
        exit(0)

print('NO')
