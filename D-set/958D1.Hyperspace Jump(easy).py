# from dust i have come dust i will be

n=int(input())

id=[0]*n
dict={}

for i in range(n):
    s=input()
    id[i]=eval(s)
    if id[i] not in dict:
        dict[id[i]]=1
    else:
        dict[id[i]]+=1

for i in range(n):
    print(dict[id[i]],end=' ')
