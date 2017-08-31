#from dust i have come, dust i will be

s=input()
k=int(input())

a=set(s)

req=k-len(a)

if k>len(s):
    print("impossible")

else:
    if req<0:
        req=0
        
    print(req)
