# from dust i have come, dust i will be

n = int(input())
m = int(input())

a = [0] * n
for i in range(n):
    x = int(input())
    a[i] = x

kmax = max(a) + m

a.sort()
for i in range(n):
    if not m:
        break

    x = min(a[n - 1] - a[i], m)
    m -= x
    a[i] += x

q = m // n
r = m % n
for i in range(n):
    a[i] += q

m -= q * n
for i in range(m):
    a[i] += 1

kmin = max(a)
print(kmin, kmax)
