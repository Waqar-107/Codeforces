/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 5100
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

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sff(n, k);

    int a[n];
    for(i = 0; i < n; i++) sf(a[i]);

    string s;
    cin >> s;

    vector<int> vec;
    vec.pb(a[0]);

    ll ans = 0;
    for(i = 1; i < n; i++)
    {
        if(s[i] == s[i - 1])
            vec.pb(a[i]);

        else
        {
            sort(vec.begin(), vec.end(), greater<int>());

            m = min(k, (int)vec.size());
            for(j = 0; j < m; j++)
                ans += vec[j];

            vec.clear();
            vec.pb(a[i]);
        }
    }

    sort(vec.begin(), vec.end(), greater<int>());

    m = min(k, (int)vec.size());
    for(j = 0; j < m; j++)
        ans += vec[j];

    pfl(ans);

    return 0;
}
