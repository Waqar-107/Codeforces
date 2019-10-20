# from dust i have come, dust i will be

n = int(input())
a = []

for i in range(n):
    x = input()
    a.append(x)

arr = []
for i in range(26):
    arr.append(chr(i + ord('a')))

for i in range(26):
    for j in range(26):
        arr.append(arr[i] + chr(j + ord('a')))

for i in range(len(arr)):
    cnt = 0
    for j in range(n):
        if arr[i] not in a[j]:
            cnt += 1
    if cnt == n:
        print(arr[i])
        exit(0)
