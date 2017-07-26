#"from dust i have come, dust i will be"

s=input()

x=0;y=0

for i in range(len(s)):
    if(s[i]=='x'):
        x+=1
    else:
        y+=1

t=""
if(x>y):
    for i in range(x-y):
        t+="x"

else:
    for i in range(y-x):
        t+="y"

print(t)
