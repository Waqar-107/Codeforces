#"from dust i have come, dust i will be"

import sys

n=int(input())
a=list(map(int,input().split()))

for i in range(n):
    if i==n-1:

        if a[i]==0:
            break

        sys.stdout.write('P')
        a[i]-=1

        while(a[i]>0):
            sys.stdout.write("LRP")
            a[i]-=1

    else:
        if a[i]==0:
            sys.stdout.write('R')
            continue

        sys.stdout.write('P')
        a[i]-=1

        while(a[i]>0):
            sys.stdout.write("R")
            if a[i+1]>0:
                sys.stdout.write("PL")
                a[i+1]-=1
            else:
                sys.stdout.write("L")

            a[i]-=1
            sys.stdout.write('P')

        sys.stdout.write("R")



