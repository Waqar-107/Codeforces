#"from dust i have come, dust i will be"

y=int(input())

if((y%4==0 and y%100!=0) or (y%4==0 and y%100==0 and y%400==0)):
    leap=1
else:
    leap=0

cd=0
while(1):

    cy=y+1
    if((y%4==0 and y%100!=0) or (y%4==0 and y%100==0 and y%400==0)):
        cd+=2
    else:
        cd+=1

    cd=cd%7

    if((cy%4==0 and cy%100!=0) or (cy%4==0 and cy%100==0 and cy%400==0)):
        cl=1
    else:
        cl=0

    if(cd==0 and cl==leap):
        break

    y+=1

print(cy)
