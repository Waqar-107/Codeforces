# from dust i have come, dust i will be

n, m = map(int, input().split())
s = [[' '] * m for i in range(n)]

for i in range(n):
    s[i] = input()

dx = [1, -1, 0, 0, 1, 1, -1, -1]
dy = [0, 0, 1, -1, 1, -1, 1, -1]


def inside(r, c):
    if r >= 0 and c >= 0 and r < n and c < m:
        return True
    else:
        return False


for i in range(n):
    for j in range(m):
        if s[i][j] == '.':
            for k in range(8):
                x = i + dx[k]
                y = j + dy[k]

                if inside(x, y) == True and s[x][y] == '*':
                    print('NO')
                    exit(0)

        #digit
        elif s[i][j] != '*':
            cnt=0
            for k in range(8):
                x = i + dx[k]
                y = j + dy[k]

                if inside(x, y) == True and s[x][y] == '*':
                    cnt+=1

            if cnt!=ord(s[i][j])-48:
                print('NO')
                exit(0)

print('YES')
