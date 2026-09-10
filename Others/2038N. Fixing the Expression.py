def fix_expression():
    a, sign, b = input()
    a, b = int(a), int(b)
    if a > b:
        sign = ">"
    elif a < b:
        sign = "<"
    else:
        sign = "="
    print(a, sign, b, sep="")


n = int(input())
for _ in range(n):
    fix_expression()
