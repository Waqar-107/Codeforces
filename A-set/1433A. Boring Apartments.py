t = int(input())

arr = []
for i in range(1, 10):
    for j in range(1, 5):
        arr.append(str(i) * j)

while t > 0:
    t -= 1
    ans = 0
    x = input()

    for e in arr:
        ans += len(e)
        if e == x:
            break

    print(ans)
   
