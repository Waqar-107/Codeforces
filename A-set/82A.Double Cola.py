#from dust i have come dust i will be

n=int(input())

names=["Sheldon", "Leonard", "Penny", "Rajesh", "Howard"]

i=0
a=0
while 1:
   x=pow(2,i)
   i+=1

   b=a+x*5

   if a+1<=n and n<=b:
       a=a+1
       break

   a+=x*5

#there are x of them each
#they are in range a-b

for i in range(5):
    rb=a+x-1
    if a<=n and n<=rb:
        print(names[i])
        exit(0)

    a=rb+1
