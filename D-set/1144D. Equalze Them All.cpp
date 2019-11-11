/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 201010
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
#define pp pair<int, int>

using namespace std;

int cnt[N];
int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, q;

    sf(n);

    int a[n];
    for(i = 0; i < n; i++)
        sf(a[i]), cnt[a[i]]++;

    int mx = 0;
    for(i = 0; i < n; i++)
    {
        if(mx < cnt[a[i]])
            mx = cnt[a[i]], k = i;
    }

    vector<pair<int, pp>> vec;

    // now from k we will go rightwards once and once leftward
    for(i = k + 1; i < n; i++)
    {
        if(a[k] == a[i]) continue;

        if(a[k] > a[i])
            vec.pb({1, {i + 1, i}});
        else
            vec.pb({2, {i + 1, i}});
    }

    for(i = k - 1; i >= 0; i--)
    {
        if(a[k] == a[i]) continue;

        if(a[k] > a[i])
            vec.pb({1, {i + 1, i + 2}});
        else
            vec.pb({2, {i + 1, i + 2}});
    }

    n = vec.size();
    pf(n), nl;
    for(i = 0; i < n; i++)
    {
        pf(vec[i].first), pfs(" ");
        pff(vec[i].second.first, vec[i].second.second), nl;
    }

    return 0;
}
