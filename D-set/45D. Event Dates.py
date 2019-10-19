# from dust i have come, dust i will be

n = int(input())
seg = []

for i in range(n):
    l, r = map(int, input().split())
    seg.append((l, r, i))

seg.sort(key=lambda tup: (tup[1], tup[0], tup[2]))
assigned = set()
ans = [0] * n

for i in range(n):
    
    # this loop won't run more than 100 times as n <= 100
    for j in range(seg[i][0], seg[i][1] + 1, 1):
        if j not in assigned:
            ans[seg[i][2]] = j
            assigned.add(j)
            break


for i in range(n):
    print(ans[i], end=' ')
