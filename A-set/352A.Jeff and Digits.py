#from dust i have come dust i will be
import sys

n=int(input())
a=list(map(int,input().split()))

f=0;
for i in range(n):
    if a[i]==5:
        f+=1
z=n-f;
f=f//9;

if z==0:
    print("-1")

elif f==0 and z>0:
    print("0")

else:
    f=9*f;
    for i in range(f):
        sys.stdout.write("5");
    
    for i in range(z):
        sys.stdout.write("0")











