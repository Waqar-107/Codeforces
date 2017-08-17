#"from dust i have come, dust i will be"

import sys

n=int(input())
s=input()

t=""

#rbrb....
for i in range(n//2):
    t+="rb"

if n%2==1:
    t+="r"

r=0;b=0
for i in range(n):
    if s[i]!=t[i]:
        if t[i]=='r':
            r+=1
        else:
            b+=1

f=max(r,b)

#brbr...
t=""

for i in range(n//2):
    t+="br"

if n%2==1:
    t+="b"

r=0;b=0
for i in range(n):
    if s[i]!=t[i]:
        if t[i]=='r':
            r+=1
        else:
            b+=1

print(min(f,max(r,b)))


