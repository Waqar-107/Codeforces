# from dust i have come, dust i will be

s=input()
t=input()

v=['a','e','i','o','u']

if len(s)==len(t):
    for i in range(len(s)):
        if s[i] not in v and t[i] in v:
            print('No')
            exit(0)

        elif s[i] in v and t[i] not in v:
            print('No')
            exit(0)

    print('Yes')

else:
    print('No')
