#"from dust i have come, dust i will be"

import sys

n=int(input())
a=[input() for i in range(n)]

mp={}

for i in range(n-1,-1,-1):

    try:
        mp[a[i]]+=1
    except:
        print(a[i])
        mp[a[i]]=1


