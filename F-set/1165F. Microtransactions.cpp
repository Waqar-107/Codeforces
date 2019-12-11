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

int a[N], last[N];
bool cmp(int a, int b) {
    return last[a] < last[b];
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    ll total = 0, taken, taka, x;

    sff(n, m);
    for(i = 1; i <= n; i++)
        sf(a[i]), total += a[i];

    vector<pp> vec;
    for(i = 1; i <= m; i++)
    {
        sff(k, t);
        vec.pb({k, t});
    }

    sort(vec.begin(), vec.end());

    ll ans = total * 2, hi = total * 2, lo = 0, mid;
    while(lo <= hi)
    {
        mid = (hi + lo) / 2;

        memset(last, 0, sizeof(last));
        for(pp e : vec)
        {
            if(e.first > mid)
                break;

            last[e.second] = e.first;
        }

        vector<int>  offers;
        for(i = 1; i <= n; i++)
        {
            if(last[i])
                offers.pb(i);
        }

        sort(offers.begin(), offers.end(), cmp);

        x = 0, taken = 0, taka = 0;
        for(i = 1; i <= mid; i++)
        {
            taka++;
            while(x < offers.size() && last[offers[x]] < i)
                x++;

            while(x < offers.size() && last[offers[x]] == i)
            {
                k = min(taka, (ll)a[offers[x]]);
                taken += k;
                taka -= k;
                x++;
            }
        }

        taka -= (total - taken) * 2;

        if(taka < 0)
            lo = mid + 1;
        else
            ans = min(ans, mid), hi = mid - 1;
    }

    pfl(ans);

    return 0;
}
