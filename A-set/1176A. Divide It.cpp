/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 550
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
#define pp pair<int,int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    int cnt[3];
    ll x;

    sf(t);
    while(t--)
    {
        sfl(x);

        memset(cnt, 0, sizeof(cnt));

        while(x % 2 == 0)
            x /= 2, cnt[0]++;

        while(x % 3 == 0)
            x /= 3, cnt[1]++;

        while(x % 5 == 0)
            x /= 5, cnt[2]++;

        if(x != 1)
            pf(-1);

        else
        {
            ll ans = cnt[0] + 2 * cnt[1] + 3 * cnt[2];
            pfl(ans);
        }

        nl;
    }

    return 0;
}
