#from dust i have come dust i will be

def sum(n):
    s=0
    while n>0 and s<11:
        s+=(n%10)
        n=n//10

    return s

n=int(input())

i=19
cnt=0
while 1:
    if sum(i)==10:
        cnt+=1

    if cnt==n:
        print(i)
        exit(0)

    i+=9

