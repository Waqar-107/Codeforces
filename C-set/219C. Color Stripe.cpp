/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 501010
#define inf 1e9

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<ll, ll>

using namespace std;

int dp[N][30];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, l;
    string s;

    sff(n, k);
    cin >> s;

    if(k == 2)
    {
        string s2, temp;
        m = 0; k = 0;
        for(i = 0; i < n; i++)
        {
            if(i % 2) s2.pb('A');
            else s2.pb('B');

            if(s[i] != s2[i]) m++;
        }

        temp = s2;
        s2.clear();

        for(i = 0; i < n; i++)
        {
            if(i % 2) s2.pb('B');
            else s2.pb('A');

            if(s[i] != s2[i]) k++;
        }

        if(k < m)
            cout << k << "\n" << s2;
        else
            cout << m << "\n" << temp;

        return 0;
    }

    memset(dp, 0, sizeof(dp));

    for(j = 1; j <= k; j++)
    {
        if(j + 'A' - 1 == s[0])
            dp[1][j] = 0;
        else
            dp[1][j] = 1;
    }

    for(i = 2; i <= n; i++)
    {
        for(j = 1; j <= k; j++)
        {
            if(j + 'A' - 1 == s[i - 1])
                dp[i][j] = 0;
            else
                dp[i][j] = 1;

            m = N * 2;
            for(l = 1; l <= k; l++)
            {
                if(l != j)
                    m = min(m, dp[i - 1][l]);
            }

            dp[i][j] += m;
        }
    }

    vector<int> vec;
    for(i = 1; i <= n; i++)
    {
        m = N * 2;
        for(j = 1; j <= k; j++)
            m = min(dp[i][j], m);

        vec.pb(m);
    }

    cout << m << endl;

    s.pb('#');
    for(i = 1; i < n; i++)
    {
        if(vec[i] == vec[i - 1])
            continue;

        if(s[i - 1] != 'A' && s[i + 1] != 'A')
            s[i] = 'A';
        else if(s[i - 1] != 'B' && s[i + 1] != 'B')
            s[i] = 'B';
        else
            s[i] = 'C';
    }

    s.pop_back();
    cout << s;

    return 0;
}
