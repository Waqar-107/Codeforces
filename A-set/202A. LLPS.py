# from dust i have come, dust i will be

s = input()
n = len(s)
mx = max(s)

for i in range(n):
    if mx == s[i]:
        print(s[i], end='')
