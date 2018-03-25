# from dust i have come dust i will be

n = int(input())

s = [None] * n
for i in range(n):
    s[i] = input()

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

for i in range(n):
    for j in range(n):
        cnt = 0
        for k in range(4):
            x = i + dx[k]
            y = j + dy[k]

            if x >= 0 and y >= 0 and x < n and y < n:
                if s[x][y] == 'o':
                    cnt += 1

        if cnt % 2 == 1:
            print('NO')
            exit(0)

print('YES')
