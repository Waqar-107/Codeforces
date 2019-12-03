# from dust i have come, dust i will be

s = input()
arr = s.split('.')

for i in arr:
    if len(i) == 0:
        print('NO')
        exit(0)

if len(arr) < 2:
    print('NO')
    exit(0)

ans = ['']
ans[0] = arr[0]

for i in range(1, len(arr) - 1, 1):
    ans.append('')
    if len(arr[i]) > 3:
        ans[i - 1] = ans[i - 1] + '.' + arr[i][:3]
        ans[i] = arr[i][3:]
    else:
        ans[i - 1] = ans[i - 1] + '.'
        ans[i] = ''
        if len(arr[i]) == 1:
            ans[i] += arr[i]
        elif len(arr[i]) == 2:
            ans[i - 1] += arr[i][0]
            ans[i] += arr[i][1]
        elif len(arr[i]) == 3:
            ans[i - 1] += arr[i][:2]
            ans[i] += arr[i][2]

    # print(ans[i - 1], ans[i])

ans[len(ans) - 1] += '.' + arr[len(arr) - 1]

for i in ans:
    x = i.split('.')
    # print(x)
    if len(x) != 2 or len(x[0]) < 1 or len(x[0]) > 8 or len(x[1]) < 1 or len(x[1]) > 3:
        print('NO')
        exit(0)

print('YES')
for i in ans:
    print(i)
