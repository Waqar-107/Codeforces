#from dust i have come dust i will be

n=int(input())
s=input()

sf=0;fs=0

for i in range(n-1):
    if s[i]=='F' and s[i+1]=='S':
        fs+=1
    elif s[i]=='S' and s[i+1]=='F':
        sf+=1

if sf>fs:
    print("YES")
else:
    print("NO")














