# from dust i have come, dust i will be

q = int(input())

while q > 0:
    q -= 1
    n = int(input())
    s = input()

    if n > 2:
        print('YES')
        print(2)
        print(s[0], s[1:])
    else:
        if s[0] < s[1]:
            print('YES')
            print(2)
            print(s[0],s[1])
        else:
            print('NO')
