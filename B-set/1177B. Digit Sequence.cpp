/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1000100
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
#define pp pair<int, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    ll i, j, k;
    ll n, m, d, cnt;

    sfl(k);

    if(k < 10)
    {
        pfl(k);
        return 0;
    }

    m = 9, d = 1, cnt = 9;
    while(1)
    {
        if(k > cnt)
            m *= 10, d++, cnt += (m * d);

        else
            break;
    }

    cnt = 0;
    m /= 10; j = 1;
    for(i = 9; i <= m; i *= 10)
        cnt += (i * j), j++;

    ll q = (k - cnt) / d;
    ll r = (k - cnt) % d;

    j--;
    ll x = 0;
    while(j > 1) {
        x = (x * 10) + 9;
        j--;
    }

    m += x;

    if(!r)
    {
        n = m + q;
        pfl(n % 10);
    }

    else
    {
        n = m + q + 1;
        r = d - r;

        while(r--)
        {
            n /= 10;
        }

        pfl(n % 10);
    }

    return 0;
}
