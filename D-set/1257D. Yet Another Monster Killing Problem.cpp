/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 200010
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

int a[N], segTree[N * 4];
pp h[N];

void build(int at, int l, int r)
{
    if(l == r)
    {
        segTree[at] = h[l - 1].second;
        return;
    }

    int mid = (l + r) / 2;

    build(at * 2, l, mid);
    build(at *2 + 1, mid + 1, r);

    int x = segTree[at * 2];
    int y = segTree[at * 2 + 1];

    segTree[at] = max(x, y);
}

// we are now in the range L-R in the tree
// we are given l-r as the query in the input
int query(int at, int L, int R, int l, int r)
{
    // out of range
    if(r < L || R < l) return 0;

    // completely in range
    if(l <= L && R <= r)
        return segTree[at];

    int mid = (L + R) / 2;
    int x = query(at * 2, L, mid, l, r);
    int y = query(at * 2 + 1, mid + 1, R, l, r);

    return max(x, y);
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int idx, jdx, kdx;
    int n, m, t;
    int mx, mx_pow_soFar, endurance;

    sf(t);
    while(t--)
    {
        sf(n);

        mx = 0;
        for(i = 0; i < n; i++)
            sf(a[i]), mx = max(a[i], mx);

        sf(m); k = 0;
        for(i = 0; i < m; i++)
            sff(h[i].first, h[i].second), k = max(k, h[i].first);

        if(mx > k)
        {
            pf(-1); nl;
            continue;
        }

        sort(h, h + m);
        build(1, 1, m);

        int ans = 0;
        i = 0;

        while(i < n)
        {
            ans++;

            mx_pow_soFar = a[i];
            endurance = 1;

            // now check how far we can go
            for(j = i + 1; j < n; j++)
            {
                endurance++;
                mx_pow_soFar = max(mx_pow_soFar, a[j]);

                jdx = lower_bound(h, h + m, make_pair(mx_pow_soFar, 1)) - h;

                // now from jdx to n - 1 search for someone who has the required endurance
                kdx = query(1, 1, m, jdx + 1, m);

                if(kdx < endurance) break;
            }

            i = j;
        }

        pf(ans); nl;
    }

    return 0;
}
