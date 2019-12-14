/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 210101
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

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    ll n, m, t;

    sfl(t);
    while(t--)
    {
        sfl(n);

        ll cnt = 0;
        for(i = 1; i <= 9; i++)
        {
            m = 0;
            for(j = 1; j <= 9; j++)
            {
                m = m * 10 + i;
                if(m <= n) cnt++;
            }
        }

        pfl(cnt), nl;
    }

    return 0;
}
