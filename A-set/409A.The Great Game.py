# from dust i have come dust i will be

def move(ch1):
    if ch1 == '8':
        return 3
    elif ch1 == '[':
        return 2

    return 1


s = input()
t = input()

cnt1 = 0;
cnt2 = 0
for i in range(0, len(s), 2):
    x = move(s[i])
    y = move(t[i])

    if x == 1 and y == 2:
        cnt2 += 1

    if x == 1 and y == 3:
        cnt1 += 1

    if x == 2 and y == 1:
        cnt1 += 1

    if x == 2 and y == 3:
        cnt2 += 1

    if x == 3 and y == 2:
        cnt1 += 1

    if x == 3 and y == 1:
        cnt2 += 1

if cnt1 == cnt2:
    print('TIE')

elif cnt1 > cnt2:
    print('TEAM 1 WINS')

else:
    print('TEAM 2 WINS')
