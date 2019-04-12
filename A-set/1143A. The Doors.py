# from dust i have come, dust i will be

n = int(input())
p = list(map(int, input().split()))

x = 0
y = 0
for i in range(n):
    if p[i]:
        y = max(i + 1, y)
    else:
        x = max(i + 1, x)

print(min(x, y))
