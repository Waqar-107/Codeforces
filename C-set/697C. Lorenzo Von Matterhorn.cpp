/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 35
#define inf 10000

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

unordered_map<ll, ll> mp;
ll solve(ll u, ll v, ll w)
{
    ll ans = 0;
    while(u != v)
    {
        if(u > v)
        {
            ans += mp[u];
            mp[u] += w;

            u /= 2;
        }

        else
        {
            ans += mp[v];
            mp[v] += w;

            v /= 2;
        }
    }

    return ans;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    ll u, v, w;

    sf(n);
    while(n--)
    {
        sf(t);
        sffl(u, v);

        if(t == 1)
        {
            sfl(w);
            solve(u, v, w);
        }

        else
            pfl(solve(u, v, 0)), nl;
    }

    return 0;
}
