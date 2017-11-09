#from dust i have come dust i will be

n=int(input())
a=input()

l=0;r=0;u=0;d=0

for i in range(n):
    if a[i]=='L':
        l+=1;
    elif a[i]=='R':
        r+=1
    elif a[i]=='U':
        u+=1
    else:
        d+=1

print(min(l,r)*2+min(u,d)*2)

