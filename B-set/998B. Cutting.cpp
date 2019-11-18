/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010100
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
    int n, m;

    sff(n, m);

    int a[n];
    for(i = 0; i < n; i++)
        sf(a[i]);

    int odd = 0, even = 0;
    vector<int> prices;

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2) odd++;
        else even ++;

        // can make a cut
        if(odd == even)
        {
            if(i + 1 < n)
                prices.pb(abs(a[i] - a[i + 1]));
        }
    }

    sort(prices.begin(), prices.end());

    int cnt = 0;
    for(int e : prices)
    {
        if(e > m) break;
        cnt++;
        m -= e;
    }

    pf(cnt);

    return 0;
}

