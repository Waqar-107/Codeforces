# from dust i have come, dust i will be

month = input()
m = int(input())

s = ['January', 'February', 'March', 'April', 'May', 'June',
     'July', 'August', 'September', 'October', 'November', 'December']

mp = {}
for i in range(12):
    mp[s[i]] = i + 1

x = (mp[month] + m) % 12
if x == 0:
    x = 12

print(s[x - 1])
