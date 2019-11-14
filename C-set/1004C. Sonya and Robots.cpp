/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 20
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

    map<int, int> mp;
    set<int> s;
    map<int, bool> vis;

    sf(n);

    int a[n];
    for(i = 0; i < n; i++)
        sf(a[i]), mp[a[i]]++, s.insert(a[i]);


    ll ans = 0;
    for(i = 0; i < n; i++)
    {
        mp[a[i]]--;
        if(!mp[a[i]])
            s.erase(a[i]);

        if(!vis[a[i]])
            ans += s.size(), vis[a[i]] = true;
    }

    pfl(ans);

    return 0;
}
