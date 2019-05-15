# from dust i have come, dust i will be

n = int(input())
for i in range(n):
    l = int(input())
    s = input()

    k = 0
    for j in range(len(s)):
        if s[j] == '8':
            k += 1
            break
        else:
            k += 1

    if len(s) - k >= 10:
        print("YES")
    else:
        print("NO")
