# from dust i have come, dust i will be

x=int(input())
n=int(input())

cnt=[0]*20
for i in range(n):
    s=input()
    cnt[ord(s[0])-48]+=1

ans=2
for i in range(20):
    if cnt[i]>0:
        if cnt[i]%x==0:
            ans+=(cnt[i]//x)
        else:
            ans+=(cnt[i]//x+1)

print(ans)
