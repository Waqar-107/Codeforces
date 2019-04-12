# from dust i have come, dust i will be

n = int(input())

s = [""] * n
for i in range(n):
    s[i] = input()

ans = 0
for i in range(n):
    for j in range(n):
        if s[i][j] == '.':
            continue

        # row
        for k in range(j + 1, n):
            if s[i][k] == 'C':
                ans += 1

        # column
        for k in range(i + 1, n):
            if s[k][j] == 'C':
                ans += 1

print(ans)
