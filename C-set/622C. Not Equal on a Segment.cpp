/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 201010
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

int a[N];
pp segTreeMin[4 * N], segTreeMax[4 * N];

void buildMin(int at, int l, int r)
{
    if(l == r)
    {
        segTreeMin[at] = {a[l], l};
        return;
    }

    int mid = (l + r) / 2;

    buildMin(at * 2, l, mid);
    buildMin(at *2 + 1, mid + 1, r);

    pp x = segTreeMin[at * 2];
    pp y = segTreeMin[at * 2 + 1];

    if(x.first <= y.first)
        segTreeMin[at] = x;
    else
        segTreeMin[at] = y;
}

// we are now in the range L-R in the tree
// we are given l-r as the query in the input
pp queryMin(int at, int L, int R, int l, int r)
{
    // out of range
    if(r < L || R < l)return {inf, inf};

    // completely in range
    if(l <= L && R <= r)
        return segTreeMin[at];

    int mid = (L + R) / 2;
    pp x = queryMin(at * 2, L, mid, l, r);
    pp y = queryMin(at * 2 + 1, mid + 1, R, l, r);

    if(x.first <= y.first)
        return x;
    else
        return y;
}

void buildMax(int at, int l, int r)
{
    if(l == r)
    {
        segTreeMax[at] = {a[l], l};
        return;
    }

    int mid = (l + r) / 2;

    buildMax(at * 2, l, mid);
    buildMax(at *2 + 1, mid + 1, r);

    pp x = segTreeMax[at * 2];
    pp y = segTreeMax[at * 2 + 1];

    if(x.first >= y.first)
        segTreeMax[at] = x;
    else
        segTreeMax[at] = y;
}

// we are now in the range L-R in the tree
// we are given l-r as the query in the input
pp queryMax(int at, int L, int R, int l, int r)
{
    // out of range
    if(r < L || R < l)return {0, 0};

    // completely in range
    if(l <= L && R <= r)
        return segTreeMax[at];

    int mid = (L + R) / 2;
    pp x = queryMax(at * 2, L, mid, l, r);
    pp y = queryMax(at * 2 + 1, mid + 1, R, l, r);

    if(x.first >= y.first)
        return x;
    else
        return y;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int l, r, x;

    sff(n, m);
    for(i = 1; i <= n; i++)
        sf(a[i]);

    buildMin(1, 1, n);
    buildMax(1, 1, n);

    pp mn, mx;
    for(i = 0; i < m; i++)
    {
        sff(l, r), sf(x);

        mn = queryMin(1, 1, n, l, r);
        mx = queryMax(1, 1, n, l, r);

        if(mn.first != x)
            pf(mn.second);

        else if(mx.first != x)
            pf(mx.second);

        else
            pf(-1);

        nl;
    }

    return 0;
}
