#"from dust i have come, dust i will be"

import sys

s=input()
t=input()

count=0
for i in range(len(s)):
    if(s[i]!=t[i]):
        count+=1

if(count%2==1):
    print("impossible")
else:
    k=1
    for i in range(len(s)):
        if(s[i]!=t[i]):
            if(k==1):
                sys.stdout.write(s[i])
                k=2
            else:
                sys.stdout.write(t[i])
                k=1

        else:
            sys.stdout.write(s[i])





