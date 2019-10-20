# from dust i have come, dust i will be


def solve(ip):
    ch = ip.split(':')
    n = len(ch)

    if ch[n - 1] == '' and n - 2 >= 0 and ch[n - 2] == '':
        ch.pop(n - 1)

    if ch[0] == '' and n > 1 and ch[1] == '':
        ch.pop(0)
    
    extra = 8 - len(ch)
    ans = []

    for i in range(len(ch)):
        if ch[i] != '':
            while len(ch[i]) < 4:
                ch[i] = '0' + ch[i]
            ans.append(ch[i])
        else:
            ans.append('0000')
            while extra > 0:
                ans.append('0000')
                extra -= 1

    ret = ''
    for i in range(len(ans)):
        ret += ans[i]
        if i != len(ans) - 1:
            ret += ':'

    return ret


n = int(input())
for i in range(n):
    s = input()
    print(solve(s))
