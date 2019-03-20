/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 2500
#define inf 1e6

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
#define pp pair<ll , ll>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sf(n);
    int a[n];

    for(i = 0; i < n; i++)
        sf(a[i]);

    int mx  = 0, cnt = 0;
    vector<int> seg;

    for(i = 0; i < n; i++)
    {
        if(a[i] == 1)
            cnt++;
        else
            seg.pb(cnt), cnt = 0;
    }

    if(cnt)
        seg.pb(cnt);

    if(n > 1 && a[0] == a[n - 1] && a[0])
    {
        mx = seg[0] + seg[seg.size() - 1];
        for(i = 1; i < seg.size() - 1; i++)
            mx = max(mx, seg[i]);
    }

    else
    {
        for(i = 0; i < seg.size(); i++)
            mx = max(mx, seg[i]);
    }

    pf(mx);

    return 0;
}
