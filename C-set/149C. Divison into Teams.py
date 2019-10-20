# from dust i have come, dust i will be

n = int(input())
a = list(map(int, input().split()))

arr = []
for i in range(n):
    arr.append((a[i], i + 1))

arr.sort(reverse=True)

t1 = []
t2 = []
sum1 = 0
sum2 = 0

ex = -1
if n % 2 == 1:
    ex = arr[n - 1][1]
    n -= 1

for i in range(0, n, 2):
    if arr[i][0] >= arr[i + 1][0]:
        mx = arr[i][0]
        mn = arr[i + 1][0]

        imx = arr[i][1]
        imn = arr[i + 1][1]

    else:
        mn = arr[i][0]
        mx = arr[i + 1][0]

        imn = arr[i][1]
        imx = arr[i + 1][1]

    if sum1 <= sum2:
        sum1 += mx
        sum2 += mn
        t1.append(imx)
        t2.append(imn)
    else:
        sum1 += mn
        sum2 += mx
        t1.append(imn)
        t2.append(imx)

if sum1 < sum2 and ex != -1:
    t1.append(ex)

elif sum2 <= sum1 and ex != -1:
    t2.append(ex)

print(len(t1))
for i in range(len(t1)):
    print(t1[i], end=' ')

print()

print(len(t2))
for i in range(len(t2)):
    print(t2[i], end=' ')
