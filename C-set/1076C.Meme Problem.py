# from dust i have come, dust i will be

import math

t=int(input())
while t:
    t-=1
    d=int(input())

    if d*d-4*d<0:
        print('N')

    else:
        b=(d-math.sqrt(d*d-4*d))/2
        a=d-b

        print('Y',a,b)
