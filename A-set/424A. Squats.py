# from dust i have come, dust i will be

n = int(input())
s = input()

ans = []
for i in range(n):
    ans.append(s[i])

x = s.count('x')
X = n - x

cnt = 0
if x > X:
    i = 0
    while X < x:
        if s[i] == 'x':
            ans[i] = 'X'
            X += 1
            x -= 1
            cnt += 1
        i += 1

elif X > x:
    i = 0
    while x < X:
        if s[i] == 'X':
            ans[i] = 'x'
            x += 1
            X -= 1
            cnt += 1
        i += 1

print(cnt)
for i in range(n):
    print(ans[i], end='')
