/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 2500
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
#define pp pair<ll , ll>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sf(n);

    vector<int> x, y;
    map<int, int> mp;

    for(i = 0; i < n; i++)
    {
        sf(m);

        mp[m]++;
        if(mp[m] == 1)
            x.pb(m);

        else if(mp[m] == 2)
            y.pb(m);

        else
        {
            pfs("NO\n");
            return 0;
        }
    }

    sort(x.begin(), x.end(), greater<int>());
    sort(y.begin(), y.end());

    pfs("YES\n");

    pf(y.size()); nl;
    for(int e : y)
        pf(e), pfs(" ");

    nl;

    pf(x.size()); nl;
    for(int e : x)
        pf(e), pfs(" ");

    return 0;
}
