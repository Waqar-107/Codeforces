#from dust i have come dust i will be

m=1000000007

x,y=map(int,input().split())
n=int(input())

z=[x,y,y-x,-x,-y,x-y]
n%=6

print(z[n-1]%m)
