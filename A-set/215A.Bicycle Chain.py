#from dust i have come, dust i will be

import sys

n=int(input())
a=list(map(int,input().split()))

m=int(input())
b=list(map(int,input().split()))

mp={}
for i in range(len(b)):

    for j in range(len(a)):
        if b[i]%a[j]==0:
            try:
                x=mp.get(b[i]//a[j])
                mp[b[i]//a[j]]=x+1
            except:
                mp[b[i]//a[j]]=1

m=0
for i in mp:
    if i>m:
        m=i


print(mp[m])




