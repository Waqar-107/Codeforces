#"from dust i have come, dust i will be"

n=int(input())
s=input()

m=0
sum=0

for i in range(len(s)):
    if s[i]==' ':
        m=max(m,sum)
        sum=0
    if s[i].isupper():
        sum+=1;

m=max(m,sum)
print(m)



