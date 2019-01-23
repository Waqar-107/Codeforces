#from dust i have come, dust i will be

s = input()

stk = []

cnt = 0
for i in range(len(s)):
	if len(stk) == 0:
		stk.append(s[i])
	
	else:
		if s[i] == stk[len(stk) - 1]:
			stk.pop()
			cnt += 1
		else:
			stk.append(s[i])

if cnt & 1 :
	print('Yes')
else:
	print('No')
