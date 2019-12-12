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

vector<int> vec[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    int x, y;

    sf(n);
    int a[n];

    for(i = 0; i < n; i++)
        sf(a[i]);

    k = 0;
    vec[k].pb(a[0]);

    for(i = 1; i < n; i++)
    {
        if(a[i] > a[i - 1])
            vec[k].pb(a[i]);
        else
            k++, vec[k].pb(a[i]);
    }

    k++;

    int ans = 0;
    for(i = 0; i < k; i++)
        ans = max((int)vec[i].size(), ans);

    for(i = 1; i < k; i++)
    {
        if(vec[i].size() > 1 && vec[i - 1].size() > 1)
        {
            x = vec[i - 1].size();
            y = vec[i].size();

            // remove from vec[i - 1]
            if(vec[i - 1][x - 2] < vec[i][0])
                ans = max(ans, x + y - 1);

            else if(vec[i - 1][x - 1] < vec[i][1])
                ans = max(ans, x + y - 1);
        }
    }

    pf(ans);

    return 0;
}
