# from dust i have come dust i will be

n = int(input())
a = list(map(int, input().split()))

dp = [[0] * 2 for i in range(n+1)]

for i in range(1, n + 1):

    # fill the gym
    if (a[i - 1] == 2 or a[i - 1] == 3):
        dp[i][0] = min(dp[i - 1][1], min(dp[i - 1][0], dp[i - 1][1]) + 1)
    else:
        dp[i][0] = min(dp[i - 1][0], dp[i - 1][1]) + 1

    # fill the contest
    if (a[i - 1] == 1 or a[i - 1] == 3):
        dp[i][1] = min(dp[i - 1][0], min(dp[i - 1][0], dp[i - 1][1]) + 1)
    else:
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + 1

print(min(dp[n][0],dp[n][1]))
