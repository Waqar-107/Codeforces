# from dust i have come dust i will be

n=int(input())
a=list(map(int,input().split()))

m=max(a)

right=[]
left=[]

cnt=[0]*5010
for i in range(n):
    cnt[a[i]]+=1

s=set(a)
n=len(s)

for i in s:
    if cnt[i]>0 and i<m:
        right.append(i)
        cnt[i]-=1

for i in s:
    if cnt[i]>0 and i<m:
        left.append(i)

print(1+len(left)+len(right))

left.sort()
for i in range(len(left)):
    print(left[i],end=' ')

print(m,end=' ')

right.sort(reverse=True)
for i in range(len(right)):
    print(right[i],end=' ')
