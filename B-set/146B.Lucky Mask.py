#from dust i have come dust i will be

import sys

def fx(a):
    sa=str(a)
    m=""
    for i in range(len(sa)):
        if sa[i]=='4' or sa[i]=='7':
            m+=sa[i]

    if len(m)>0:
        n=int(m)
    else:
        n=0
        
    return n

a,b=map(int,input().split())

while 1:
    a+=1
    x=fx(a)
    if x==b:
        print(a)
        exit(0)

