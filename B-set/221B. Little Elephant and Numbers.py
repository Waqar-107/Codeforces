#from dust i have come, dust i will be

import math
import sys

n=int(input())
hv=[0]*10

xn=str(n)
for i in range(len(xn)):
    hv[int(xn[i])]=1

cnt=1
x=math.sqrt(n)+1

mp={}
for i in range(1,int(x)):
    if n%i==0:
        yn=str(i)
        for j in range(len(yn)):
            if hv[int(yn[j])]==1:
                mp[yn]=1
                break

        yn=str(n//i)
        for j in range(len(yn)):
            if hv[int(yn[j])]==1:
                mp[yn]=1;


print(len(mp))







