# from dust i have come, dust i will be

s = input()

# cut of leading zeroes
idx = 0
for i in range(len(s)):
    if s[i] != '0':
        break

    idx += 1

s = s[idx:len(s)]

if '.' in s:
    cnt = 0
    for i in range(len(s)):
        if s[i] == '.':
            break
        cnt += 1

    s1, s2 = s.split('.')

    e = ""
    if len(s2) == 0 or len(s1) >= 1:
        s = s1[0] + '.' + s1[1:len(s1)] + s2
        if len(s1) > 1:
            e = 'E' + str(len(s1) - 1)
        else:
            e = ''

    else:
        # starts with a point
        cnt=1
        idx=0
        for i in range(len(s2)):
            if s2[i]!='0':
                idx=i+1
                break
            cnt+=1
            
        #print(s1,s2,idx,cnt)
        e='E-'+str(cnt)
        s=s2[idx-1]+'.'+s2[idx:len(s2)]

    # cut off trailing zeroes
    idx = len(s)
    for i in range(len(s) - 1, -1, -1):
        if s[i] != '0':
            break

        idx -= 1

    s = s[:idx]

    if s[len(s) - 1] == '.':
        s = s[:len(s) - 1]

    print(s + e)

else:
    if len(s) == 1:
        print(s)
    else:
        e='E'+str(len(s)-1)
        s = s[0] + '.' + s[1:len(s)]

        # cut off trailing zeroes
        idx = len(s)
        for i in range(len(s) - 1, -1, -1):
            if s[i] != '0':
                break

            idx -= 1

        s = s[:idx]

        if s[len(s) - 1] == '.':
            s = s[:len(s) - 1]

        print(s+e)
