# from dust i have come, dust i will be

s=input()
t=input()

#match+same position : bulls
#match+different positions: cows

bulls=0
cows=0

for i in range(len(s)):
    if s[i]==t[i]:
        bulls+=1

    if s[i]!=t[i] and s[i] in t:
        cows+=1

print(bulls,cows)
