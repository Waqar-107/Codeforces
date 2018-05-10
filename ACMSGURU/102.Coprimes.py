# from dust i have come, dust i will be

import math as m

n=int(input())

cnt=1
for i in range(2,n):
    if m.gcd(n,i)==1:
        cnt+=1

print(cnt)
