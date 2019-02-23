/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 2500
#define inf 1e6

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
    ll x,y;

    sf(n);

    pp a[n + 1];
    a[0] = {0, 0};
    for(i = 1; i <= n; i++)
        sffl(a[i].first, a[i].second);

    ll ans = 1;
    for(i=1;i<=n;i++)
    {
        x = min(a[i].first, a[i].second);
        y = max(a[i - 1].first, a[i - 1].second);

        if(x >= y)
            ans += (x - y +1);

        //this was taken in account in the previous iteration
        if(a[i - 1].first == a[i - 1].second)
            ans--;
    }

    pfl(ans);

    return 0;
}
