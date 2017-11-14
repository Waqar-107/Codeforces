#from dust i have come dust i will be

s=input()
t=input()

if len(s)!=len(t):
    print("NO")
    exit(0)

if ('1' in s) and ('1' not in t):
    print("NO")

elif ('1' in t) and ('1' not in s):
    print("NO")

else:
    print("YES")
