/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
#define inf 1e18

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
#define pp pair<int, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sff(n, m);

    string s[n];
    for(i = 0; i < n; i++)
        cin >> s[i];

    int cnt[m];
    int alpha[26];

    for(i = 0; i < m; i++)
    {
        memset(alpha, 0, sizeof(alpha));
        for(j = 0; j < n; j++)
            alpha[s[j][i] - 'A']++;

        cnt[i] = 0;
        for(j = 0; j < 26; j++)
        {
            if(alpha[j])
                cnt[i]++;
        }
    }

    ll ans = 1;
    ll mod = 1e9 +7;

    for(i = 0; i < m; i++)
        ans = ((ans % mod) * (cnt[i] % mod)) % mod;

    pfl(ans);

    return 0;
}
