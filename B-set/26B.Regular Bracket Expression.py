#from dust i have come dust i will be

s=input()

a=list()

cnt=0
for i in range(len(s)):
    if s[i]=='(':
        a.append('(')
    else:
        if len(a)==0:
            cnt+=1
        else:
            a.pop()

cnt+=len(a)
print(len(s)-cnt)
