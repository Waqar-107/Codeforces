/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010101
#define inf 1e18
#define mod 998244353

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

    sf(n);

    int a[n];
    for(i = 0; i < n; i++)
        sf(a[i]), a[i] = a[i] % n;

    set<int> s;
    map<int, int> mp;

    for(i = 0; i < n; i++)
    {
        sf(m);

        m = m % n;
        s.insert(m);
        mp[m]++;
    }

    for(i = 0; i < n; i++)
    {
        k = n - a[i];

        auto itr = s.lower_bound(k);
        if(itr == s.end())
            itr = s.begin();

        k = *itr;
        pf((a[i] + k) % n), pfs(" ");

        mp[k]--;
        if(!mp[k])
            s.erase(k);
    }

    return 0;
}
