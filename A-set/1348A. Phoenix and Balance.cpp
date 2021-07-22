/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010
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
    int n, m, t;

    sf(t);
    while(t--)
    {
        sf(n);

        ll x = 0;
        int p = 1;

        for(i = 1; i <= n; i++)
            x += p, p *= 2;

        int a = 0, b = 0;
        int cnt1 = 0, cnt2 = 0;

        for(i = n; i >= 1; i--)
        {
            if(a < b && cnt1 < n / 2)
                a += p, cnt1++;
            else
                b += p, cnt2++;

            p /= 2;
        }

        pf(abs(a - b)); nl;
    }

    return 0;
}

/***https://github.com/Waqar-107/Codeforces***/
