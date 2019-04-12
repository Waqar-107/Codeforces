# from dust i have come, dust i will be

n, c = map(int, input().split())
p = list(map(int, input().split()))
t = list(map(int, input().split()))

limak = 0
radewoosh = 0

T = 0
for i in range(n):
    T += t[i]
    limak += max(0, p[i] - c * T)

T = 0
for i in range(n - 1, -1, -1):
    T += t[i]
    radewoosh += max(0, p[i] - c * T)

if radewoosh > limak:
    print("Radewoosh")
elif radewoosh < limak:
    print("Limak")
else:
    print("Tie")
