# from dust i have come, dust i will be

s=input()
stack=list()

i=0
while i<len(s):
    if s[i]=='<':
        i+=1
        if s[i]=='/':
            i+=1
            #pop
            if s[i]=='U':
                i+=3
            else:
                i+=5

            stack.pop(len(stack)-1)
        else:
            #push
            if s[i]=='U':
                i+=3
                stack.append(1)
            else:
                i+=5
                stack.append(2)
    else:
        if len(stack)==0:
            print(s[i],end='')
        else:
            if stack[len(stack)-1]==1:
                #upper-case
                print(s[i].upper(),end='')
            else:
                #lower-case
                print(s[i].lower(),end='')

        i+=1
