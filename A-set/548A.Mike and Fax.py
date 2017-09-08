#from dust i have come dust i will be

s=input()
k=int(input())

if len(s)%k!=0:
    print("NO")
    exit(0)

str=""; l=len(s)//k
for i in range(len(s)):
    str+=s[i]

    if (i+1)%l==0:
        str2=str[::-1]
   
        if str!=str2:
            print("NO")
            exit(0)

        str=""


print("YES")







