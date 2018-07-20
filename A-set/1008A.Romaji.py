# from dust i have come dust i will be

s = input()
v=['a','e','i','o','u']

n=len(s)
for i in range(n):
    if s[i] in v or s[i]=='n':
        continue
    else:
        if i==n-1:
            print('NO')
            exit(0)

        else:
            if s[i+1] not in v:
                print('NO')
                exit(0)

print('YES')
