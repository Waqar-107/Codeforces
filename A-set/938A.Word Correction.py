# from dust i have come dust i will be

n=int(input())
s=input()

a=['a','e','i','o','u','y']

ch='#'
for i in range(n):

    if s[i] not in a:
        if ch!='#':
            print(ch,end='')
            ch='#'

        print(s[i],end='')

    else:
        if ch=='#':
            ch=s[i]

if ch!='#':
    print(ch)
