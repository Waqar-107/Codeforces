#from dust i have come dust i will be

n=input()

f=0
s=0
for i in range(len(n)):
    if n[i]=='4':
        f+=1
    elif n[i]=='7':
        s+=1

if f==0 and s==0:
    print(-1)
else:
    if s>f:
        print(7)
    else:
        print(4)
