/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100010
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

struct qData{
    int g, m, c;

    qData(){}
    qData(int g, int m, int c)
    {
        this->g = g;
        this->m = m;
        this->c = c;
    }

    void print(){
        cout<<g<<" "<<m<<" "<<c;nl;
    }
};

int a[N], segTree[4 * N], gcdTree[4 * N], cnt[4 * N];
void build(int at, int l, int r)
{
    if(l == r)
    {
        segTree[at] = a[l];
        gcdTree[at] = a[l];
        cnt[at] = 1;

        return;
    }

    int mid = (l + r) / 2;

    build(at * 2, l, mid);
    build(at *2 + 1, mid + 1, r);

    int x = segTree[at * 2];
    int y = segTree[at * 2 + 1];

    segTree[at] = min(x, y);
    gcdTree[at] = __gcd(gcdTree[at * 2], gcdTree[at * 2 + 1]);

    if(x == y)
        cnt[at] = cnt[at * 2] + cnt[at * 2 + 1];
    else if(x < y)
        cnt[at] = cnt[at * 2];
    else
        cnt[at] = cnt[at * 2 + 1];
}

// we are now in the range L-R in the tree
// we are given l-r as the query in the input
qData query(int at, int L, int R, int l, int r)
{
    // out of range
    if(r < L || R < l) return qData(0, 1e9, -1);

    // completely in range
    if(l <= L && R <= r)
        return qData(gcdTree[at], segTree[at], cnt[at]);

    int mid = (L + R) / 2;
    qData x = query(at * 2, L, mid, l, r);
    qData y = query(at * 2 + 1, mid + 1, R, l, r);
/*cout<<l<<" "<<r<<endl;
x.print();
y.print(); nl;*/

    int g = __gcd(x.g, y.g);

    if(x.m == y.m)
        return qData(g, x.m, x.c + y.c);
    else if(x.m < y.m)
        return qData(g, x.m, x.c);
    else
        return qData(g, y.m, y.c);
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    int l, r;

    sf(n);
    for(i = 1; i <= n; i++)
        sf(a[i]);

    build(1, 1, n);

    sf(t);
    while(t--)
    {
        sff(l, r);

        qData temp = query(1, 1, n, l, r);
        if(temp.g == temp.m)
            pf(r - l + 1 - temp.c);
        else
            pf(r - l + 1);

        nl;
    }


    return 0;
}
