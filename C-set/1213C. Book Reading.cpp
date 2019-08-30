/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010
#define inf 1e18
#define mod 100000007

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
    int q;
    ll n, m;

    sf(q);
    while(q--)
    {
        sffl(n, m);

        ll a[11];
        for(i = 1; i <= 10; i++)
            a[i] = (m * i) % 10;

        ll temp = n / m;
        ll q = temp / 10;
        ll r = temp % 10;

        ll sum = 0;
        for(i = 1; i <= 10; i++)
            sum += a[i];

        sum *= q;
        for(i = 1; i <= r; i++)
            sum += a[i];

        pfl(sum);nl;
    }

    return 0;
}
