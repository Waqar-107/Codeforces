# from dust i have come, dust i will be

n, m = map(int, input().split())

hi = n
lo = m + 1
ans = n

while lo <= hi:
    mid = (hi + lo) // 2
    
    x = mid - m
    temp = (x * (x + 1)) // 2
    
    if n - m - temp <= 0:
        ans = min(ans, mid)
        hi = mid - 1
    else:
        lo = mid + 1

print(ans)
