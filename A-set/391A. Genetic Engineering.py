# from dust i have come, dust i will be

a = []
s = input()

cnt = 1
for i in range(1, len(s)):
    if s[i] == s[i - 1]:
        cnt += 1
    else:
        a.append(cnt)
        cnt = 1

a.append(cnt)
cnt = 0

for i in range(len(a)):
    if a[i] % 2 == 0:
        cnt += 1

print(cnt)
