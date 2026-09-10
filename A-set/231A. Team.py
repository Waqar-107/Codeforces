n = int(input())
n_tasks = 0

for i in range(n):
    s = input()
    if s.count("1") >= 2:
        n_tasks += 1

print(n_tasks)
