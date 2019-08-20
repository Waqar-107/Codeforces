/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 201010
#define inf 1e18
#define mod 100000007

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
    int n, m, q;

    sff(n, m);

    string s[n];
    for(i = 0; i < n; i++)
        cin >> s[i];

    int a[m];
    for(i = 0; i < m; i++)
        sf(a[i]);

    ll ans = 0;
    map<char, ll> mp;

    for(i = 0; i < m; i++)
    {
        mp.clear();
        for(j = 0; j < n; j++)
            mp[s[j][i]]++;

        ll mx = 0;
        for(j = 0; j < 5; j++)
            mx = max(mx, mp[j + 'A'] * a[i]);

        ans += mx;
    }

    pfl(ans);

    return 0;
}
