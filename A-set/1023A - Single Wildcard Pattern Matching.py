# from dust i have come, dust i will be

n,m=map(int,input().split())

if n-1>m:
    print('NO')
    exit(0)

s=input()
t=input()

if '*' not in s:
    if s==t:
        print('YES')
    else:
        print('NO')
    
    exit(0)

for i in range(n):
    if s[i]=='*':
        break

    if s[i]!=t[i]:
        print('NO')
        exit(0)

i=n-1
j=m-1

while i>=0 and j>=0:
    if s[i]=='*':
        break

    if s[i]!=t[j]:
        print('NO')
        exit(0)

    i-=1
    j-=1

print('YES')
