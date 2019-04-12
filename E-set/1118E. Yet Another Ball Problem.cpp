/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 200010
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

int mp[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sff(n, k);
    fill(mp, mp + k + 1, 1);

    vector<pp> ans;
    for(i = 1; i <= k; i++)
    {
        if(mp[i] == i)
            mp[i]++;

        for(j = mp[i]; j <= k; j++)
        {
            if(ans.size() == n)break;
            ans.pb({i, j});

            if(ans.size() == n)break;
            ans.pb({j, i});
            mp[j] = i + 1;
        }
    }

    if(ans.size() == n)
    {
        pfs("YES\n");
        for(i = 0; i < n; i++)
            pff(ans[i].first, ans[i].second), nl;
    }

    else
        pfs("NO\n");

    return 0;
}
