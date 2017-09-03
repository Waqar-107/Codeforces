#from dust i have come dust i will be

class pair:
    def __init__(self,f,s):
        self.f=f
        self.s=s

me=input()
n=int(input())

mp={}
for i in range(n):
    a=list(map(str,input().split()))

    if a[1]=="likes":
        ot=a[2]
    else:
        ot=a[3]

    #parse the name
    her=""
    for j in range(len(ot)-2):
        her+=ot[j]

    if me!=a[0] and me!=her:
        try:
            x=mp.get(a[0])
            mp[a[0]]+=0
        except:
            mp[a[0]]=0

        try:
            x=mp.get(her)
            mp[her]+=0
        except:
            mp[her]=0

        continue

    if a[1]=="posted":
        try:
            x=mp.get(a[0])
            mp[a[0]]+=15
        except:
            mp[a[0]]=15

        try:
            x=mp.get(a[0])
            mp[her]+=15
        except:
            mp[her]=15

    elif a[1]=="commented":
        try:
            x = mp.get(a[0])
            mp[a[0]] += 10
        except:
            mp[a[0]] = 10

        try:
            x = mp.get(a[0])
            mp[her] += 10
        except:
            mp[her] = 10

    else:
        try:
            x = mp.get(a[0])
            mp[a[0]] += 5
        except:
            mp[a[0]] = 5

        try:
            x = mp.get(a[0])
            mp[her] += 5
        except:
            mp[her] = 5

names=[]
for i in mp:
    if i != me:
        names.append(pair(mp[i],i))

l=sorted(names,key=lambda x:(-x.f,x.s))
for i in range(len(names)):
    print(l[i].s)



