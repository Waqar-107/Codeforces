#"from dust i have come, dust i will be"

n=int(input())
p=list(map(int,input().split()))


for i in range(n):
    s=input()

    count=0
    for j in range(len(s)):
        if s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u' or s[j]=='y':
            count+=1

    if count!=p[i]:
        print("NO")
        exit(0)

print("YES")
