# from dust i have come, dust i will be

a = int(input())
b = int(input())
c = int(input())
d = int(input())

# ((  | )( )( ...|  ))
# for c, we need a (( and ))
if c and (a <= 0 or d <= 0):
    print(0)
    exit(0)

a -= 1
d -= 1

if a != d:
    print(0)
    exit(0)

print(1)
