/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 10
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
    int l, r, mn, mx;

    sff(n, l);
    sff(r, x);

    int a[n];
    for(i = 0; i < n; i++)
        sf(a[i]);

    m = 1 << n;
    int ans = 0;
    for(i = 1; i < m; i++)
    {
        vector<int> vec;

        for(j = 0; j < n; j++)
        {
            if(i & (1 << j))
                vec.pb(a[j]);
        }

        mx = 0, mn = inf + 100;
        int sum = 0;
        for(int e : vec)
        {
            mx = max(mx, e);
            mn = min(mn, e);
            sum += e;
        }

        if(vec.size() > 1 && mx - mn >= x && l <= sum && sum <= r)
        {
            ans++;
            // cout<<mn<<" "<<mx<<" "<<sum<<" "<<i<<endl;
        }
    }

    pf(ans);

    return 0;
}
