# from dust i have come dust i will be

a,b,c,n=map(int,input().split())

just_a=abs(c-a)
just_b=abs(c-b)

fail=n-just_a-just_b-c

#print(just_a,just_b,fail)
if fail>0 and c<=a and c<=b:
    print(fail)
else:
    print(-1)
