#"from dust i have come, dust i will be"

import sys

n=int(input())

if n%2==1:
    print("-1")
else:
    for i in range(1,n+1):
        if i%2==1:
            sys.stdout.write(str(i+1)+" ")
        else:
            sys.stdout.write(str(i-1)+" ")
