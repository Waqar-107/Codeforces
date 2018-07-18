# from dust i have come dust i will be

#each should  be of same gender
#adjective*-noun*1-verb*

a=list(map(str,input().split()))
t=[0]*len(a)
str=["lios","liala","etr","etra","initis","inites"]

if len(a)==1:
    for i in range(6):
        if a[0].endswith(str[i]):
            print("YES")
            exit(0)

    print("NO")
    exit(0)

for i in range(len(a)):
    for j in range(6):
        if a[i].endswith(str[j]):
            t[i]=j+1
            break

    #not belonging in any language
    if t[i]==0:
        print("NO")
        exit(0)

#all the t[]'s should be either or odd
rem=t[0]%2
for i in range(len(t)):
    if t[i]%2!=rem:
        print("NO")
        exit(0)

x=sorted(t)
cnt=0

for i in range(len(t)):
    if t[i]==3 or t[i]==4:
        cnt+=1

    if t[i]!=x[i]:
        print("NO")
        exit(0)

if cnt==1:
    print("YES")

else:
    print("NO")
