# from dust i have come, dust i will be

n=int(input())
s=input()

if len(s)==1:
    print(s)
    exit(0)

print('1',end='')
for i in range(n):
    if s[i]=='0':
        print('0',end='')
