# from dust i have come, dust i will be

m = int(input())
b = list(map(int, input().split()))

n = int(input())
a = list(map(int, input().split()))

mn = min(b)
a.sort(reverse=True)

i = 0
ans = 0
while i < n:
    if (n - i - 1) < mn:
        ans += a[i]
        i += 1
    else:
        for j in range(i, i + mn):
            ans += a[j]

        i += mn
        i += 2

print(ans)


