# from dust i have come, dust i will be

n = input()

con = ['O-|-OOOO',
       'O-|O-OOO',
       'O-|OO-OO',
       'O-|OOO-O',
       'O-|OOOO-',

       '-O|-OOOO',
       '-O|O-OOO',
       '-O|OO-OO',
       '-O|OOO-O',
       '-O|OOOO-',
       ]

l = len(n)
n = n[::-1]

for i in range(l):
    print(con[int(n[i])])
