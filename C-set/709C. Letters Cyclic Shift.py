#from dust i have come dust i will be

s=input()

cnt=0
for i in range(len(s)):
    if s[i]=='a':
        cnt+=1
    else:
        break

if cnt==len(s):
    for i in range(len(s)-1):
        print('a',end='')
    print('z')
    exit(0)

if s[0]=='a':
    k=1000000
    j=-1

    for i in range(len(s)):
        if s[i]!='a':
            j=i
            break
        print(s[i],end='')

    for i in range(j,len(s)):
        if s[i]=='a':
            k=i
            break

        print(chr(ord(s[i])-1),end='')

    for i in range(k,len(s)):
        print(s[i],end='')

else:
    k = 1000000

    for i in range(len(s)):
        if s[i] == 'a':
            k = i
            break

        print(chr(ord(s[i])-1), end='')

    for i in range(k, len(s)):
        print(s[i], end='')

