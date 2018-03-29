# from dust i have come dust i will be

n=int(input())
s=input()

cnt=0
for i in range(n):
    if s[i]=='0':
        cnt+=1
        break

    cnt+=1

print(cnt)
