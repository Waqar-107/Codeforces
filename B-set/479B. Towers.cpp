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
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int x, y;

    sff(n, k);

    pp a[n];
    for(i = 0; i < n; i++)
        sf(a[i].first), a[i].second = i + 1;

    vector<pp> ans;

    int mn, cnt = 0;
    sort(a, a + n);

    while(k--)
    {
        if(a[n - 1].first - a[0].first <= 1) break;

        a[0].first++;
        a[n - 1].first--;

        ans.pb({a[n - 1].second, a[0].second});

        cnt++;
        sort(a, a + n);
    }

    mn = a[n - 1].first - a[0].first;

    pff(mn, cnt), nl;
    for(pp e : ans)
        pff(e.first, e.second), nl;

    return 0;
}
