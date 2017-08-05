#"from dust i have come, dust i will be"

import sys

n=int(input())

if n==1:
    print("b")
    exit(0)

m=n
while(n>=2):
    if n>=2:
        sys.stdout.write("bb")
        n-=2
    if n>=2:
        sys.stdout.write("aa")
        n-=2

if(n==1):

    if int((m-1)%4)==0:
        sys.stdout.write("b")
    else:
        sys.stdout.write("a")






