/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010
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
    int n, m;
    ll x, y;
    string s;

    sf(n);
    sffl(x, y);
    cin >> s;

    vector<int> vec;
    for(i = 0; i < n;)
    {
        vec.pb(s[i] - '0');
        for(j = i + 1; j < n; j++)
        {
            if(s[j] == s[i])
                continue;

            else
            {
                i = j;
                break;
            }
        }

        if(j == n) break;
    }

    ll rot = 0, conv = 0;
    m = vec.size();

    for(i = 0; i < m; i++)
    {
        if(vec[i] == 0 && i + 2 < m)
        {
            // rotate and convert or 2 rotates??
            if(x + y < 2 * y)
                rot++;
            else
                conv++;
        }

        else if(vec[i] == 0)
            conv++;
    }

    ll ans = x * rot + y * conv;
    pfl(ans);

    return 0;
}
