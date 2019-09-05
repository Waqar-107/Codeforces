/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 35
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
    int n, m, a, b, x, y;

    ll K;
    int A[4][4], B[4][4];

    sfl(K);
    sff(a, b);

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
            sf(A[i][j]);
    }

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
            sf(B[i][j]);
    }

    map<pp, int> mp;
    vector<pp> vec;

    vec.pb({a, b});
    mp[{a, b}] = 1;

    int cycle_start = -1, cycle_end = -1;
    while(1)
    {
        x = A[a][b];
        y = B[a][b];

        // cycle found
        if(mp[{x, y}])
        {
            cycle_end = vec.size();
            cycle_start = mp[{x, y}];
            break;
        }

        else vec.pb({x, y}), mp[{x, y}] = vec.size();

        a = x;
        b = y;
    }

    ll ans1 = 0, ans2 = 0;
    ll q, r;

    if(cycle_start == -1)
        cycle_start = vec.size();

    k = min(K, (ll)(cycle_start - 1));
    for(i = 0; i < k; i++)
    {
        if(vec[i].first == vec[i].second)continue;

        if(vec[i].first == 3 && vec[i].second == 2)ans1++;
        else if(vec[i].first == 2 && vec[i].second == 1)ans1++;
        else if(vec[i].first == 1 && vec[i].second == 3)ans1++;
        else ans2++;
    }

    if(cycle_start != -1 && K >= cycle_start)
    {
        K = K - cycle_start + 1;

        ll len = (cycle_end - cycle_start + 1);
        q = K / len;
        r = K % len;

        x = 0, y = 0;
        for(i = cycle_start - 1; i < cycle_end; i++)
        {
            if(vec[i].first == vec[i].second)continue;

            if(vec[i].first == 3 && vec[i].second == 2)x++;
            else if(vec[i].first == 2 && vec[i].second == 1)x++;
            else if(vec[i].first == 1 && vec[i].second == 3)x++;
            else y++;
        }

        ans1 += (x * q);
        ans2 += (y * q);

        for(i = cycle_start - 1; i < cycle_start + r - 1; i++)
        {
            if(vec[i].first == vec[i].second)continue;

            if(vec[i].first == 3 && vec[i].second == 2)ans1++;
            else if(vec[i].first == 2 && vec[i].second == 1)ans1++;
            else if(vec[i].first == 1 && vec[i].second == 3)ans1++;
            else ans2++;
        }
    }

    pffl(ans1, ans2);

    return 0;
}
