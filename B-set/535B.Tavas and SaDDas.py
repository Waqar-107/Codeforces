#"from dust i have come, dust i will be"

a=str(input())

j=1
count=0
for i in range(len(a)-1,-1,-1):
    if a[i]=='4':
        count+=(1*j)
    else:
        count+=(2*j)

    j*=2

print(count)


