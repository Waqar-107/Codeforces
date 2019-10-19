/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
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
    int n, m, x;

    sff(n, m);
    sf(k);

    vector<pp> vec;

    x = 1;
    for(i = 1; i <= n; i++)
    {
        if(x == 1)
        {
            for(j = 1; j <= m; j++)
                vec.pb({i, j});
        }

        else
        {
            for(j = m; j > 0; j--)
                vec.pb({i, j});
        }

        x = 1 - x;
    }

    //for(pp e : vec)
     //   pff(e.first, e.second), nl;

    j = 0;
    for(i = 0; i < k - 1; i++)
    {
        pfs("2 ");
        pff(vec[j].first, vec[j].second), pfs(" ");
        pff(vec[j + 1].first, vec[j + 1].second), nl;

        j += 2;
    }

    pf(n * m - 2 *(k - 1)), pfs(" ");
    while(j < vec.size())
    {
        pff(vec[j].first, vec[j].second), pfs(" ");
        j++;
    }

    return 0;
}
