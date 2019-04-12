# from dust i have come, dust i will be

n, m = map(int, input().split())
s = list(map(int, input().split()))
f = list(map(int, input().split()))

for i in range(n):
    if s[i] in f:
        print(s[i], end=" ")
