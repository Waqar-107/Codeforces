# from dust i have come, dust i will be

n, m = map(int, input().split())

s = [""] * n
for i in range(n):
    s[i] = input()

for i in range(n):
    for j in range(m):
        if s[i][j] == 'B':
            cnt = 1
            for k in range(j + 1, m):
                if s[i][k] == 'B':
                    cnt += 1
                else:
                    break

            print(i + 1 + cnt // 2, j + 1 + cnt // 2)
            exit(0)
