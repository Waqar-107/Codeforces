# from dust i have come, dust i will be

n = int(input())

mx = 0
for i in range(n):
    x, y = map(int, input().split())
    mx = max(mx, x + y)

print(mx)
