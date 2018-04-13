# from dust i have come dust i will be

n=int(input())
a=[0]*n

for i in range(n):
    a[i]=int(input())

avg=sum(a)

if avg%n!=0:
    print('Unrecoverable configuration.')
    exit(0)

avg=avg//n

x=[]
for i in range(n):
    if a[i]!=avg:
        x.append(i)

if len(x)==0:
    print('Exemplary pages.')

elif len(x)==2:
    if (a[x[0]]+a[x[1]])//2==avg:
        d=abs(a[x[0]]-a[x[1]])//2

        if a[x[0]]>a[x[1]]:
            print(str(d)+' ml. from cup #'+str(x[1]+1)+' to cup #'+str(x[0]+1)+'.')

        else:
            print(str(d)+' ml. from cup #'+str(x[0]+1)+' to cup #'+str(x[1]+1)+'.')
    else:
        print('Unrecoverable configuration.')

else:
    print('Unrecoverable configuration.')
