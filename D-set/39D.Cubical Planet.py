# from dust i have come dust i will be

'''
if the coordinates lie in the same plane then yes
'''

a,b,c=map(int,input().split())
x,y,z=map(int,input().split())

x=a-x
y=b-y
z=c-z

dist=x**2+y**2+z**2
if dist==3:
    print('NO')

else:
    print('YES')
