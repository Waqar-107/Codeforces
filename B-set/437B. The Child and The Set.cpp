/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 20
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
    // freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int sum, limit;

    sff(sum, limit);

    vector<pp> vec;
    for(i = 1; i <= limit; i++)
    {
        int p = 1;
        for(j = 0; j < 32; j++)
        {
            if(i & (1 << j)){
                vec.pb({p, i});
                break;
            }

            p *= 2;
        }
    }

    sort(vec.begin(), vec.end(), greater<pp>());

    vector<int> ans;
    for(i = 0; i < vec.size(); i++)
    {
        if(sum - vec[i].first >= 0)
            ans.pb(vec[i].second), sum -= vec[i].first;
    }

    if(sum == 0)
    {
        pf(ans.size()), nl;
        for(int e : ans)
            pf(e), pfs(" ");
    }

    else
        pf(-1);

    return 0;
}
