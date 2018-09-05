# from dust i have come, dust i will be

l,r=map(int,input().split())

'''
a,b,c- gcd(a,b)=1, gcd(b,c)=1
take a,c-even number, b as odd
'''

if l%2==1:
    l+=1

if l+2>r:
    print(-1)
else:
    print(l,l+1,l+2)
