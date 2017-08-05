#"from dust i have come, dust i will be"

a=list(input())
b=list(input())

#if two string ,matches
if a==b:
    s=set(a)
    if(len(s)==len(a)):
        print("NO")
    else:
        print("YES")

    exit(0)

#if length aren't the same
if len(a)!=len(b):
    print("NO")
    exit(0)

j=0;k=0

ch1=[]
ch2=[]

for i in range(len(a)):
    if(a[i]!=b[i]):
        ch1.insert(j,b[i])
        j+=1
        ch2.insert(k,a[i])
        k+=1

if len(ch1)!=2:
    print("NO")
else:
    if(ch1[1] == ch2[0] and ch1[0]==ch2[1]):
        print("YES")
    else:
        print("NO")





