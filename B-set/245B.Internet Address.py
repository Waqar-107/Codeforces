# from dust i have come dust i will be

s = input()

n = len(s)
if s.startswith("ftp"):
    ans = "ftp://"
    f=0

    i = 3
    while i < n:
        if ans[i-1+3]!='/' and f==0 and i + 1 < n and s[i] == 'r' and s[i + 1] == 'u':
            ans += ".ru"
            i += 1
            f = 1

            if i<n-1:
                ans+="/"
        else:
            ans += s[i]

        i+=1
else:
    ans = "http://"
    f=0

    i=4
    while i<n:
        if ans[i-1+3]!='/' and f==0 and i + 1 < n and s[i] == 'r' and s[i + 1] == 'u':
            ans += ".ru"
            i += 1
            f=1

            if i<n-1:
                ans+="/"
        else:
            ans += s[i]

        i+=1

print(ans)
