/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 5010
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

vector<int> vec[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sf(t);
    while(t--)
    {
        sf(n);
        for(i = 0; i <= n; i++) vec[i].clear();

        for(i = 0; i < n; i++)
        {
            sf(m);
            vec[m].pb(i);
        }

        bool f = false;
        for(i = 1; i <= n; i++)
        {
            if(vec[i].size() == 0) continue;
            if(vec[i][vec[i].size() - 1] - vec[i][0] > 1)
            {
                f = true;
                break;
            }

            if(f) break;
        }

        if(f) pfs("YES\n");
        else pfs("NO\n");
    }

    return 0;
}
