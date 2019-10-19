# from dust i have come, dust i will be

n = int(input())
a = list(map(int, input().split()))

pos = []
neg = []
z = 0

for i in range(n):
    if a[i] > 0:
        pos.append(a[i])
    elif a[i] < 0:
        neg.append(a[i])
    else:
        z += 1

m = len(neg)
neg.sort()

if m % 2:
    m -= 1

for i in range(m):
    pos.append(neg[i])

if len(pos) > 0:
    for i in range(len(pos)):
        print(pos[i], end=' ')
else:
    # either there are a single negative, 0 positives, 0 or more zeros
    if z:
        print(0)
    else:
        print(neg[0])
