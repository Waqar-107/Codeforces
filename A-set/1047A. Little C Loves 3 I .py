# from dust i have come, dust i will be

n = int(input())

a = 1
b = 1
c = n - 2

if c % 3 == 0:
    c -= 1
    b += 1

print(a, b, c)
