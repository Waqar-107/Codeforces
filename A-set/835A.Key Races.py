#"from dust i have come, dust i will be"

s,v1,v2,t1,t2=map(int,input().split())

uno=s*v1+2*t1
dos=s*v2+2*t2

if(uno<dos):
    print("First")
elif(dos<uno):
    print("Second")
else:
    print("Friendship")
