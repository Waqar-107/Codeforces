/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 200100
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
#define pp pair<int,int>

using namespace std;

struct node
{
    int l,r;
    ll c;
};

bool cmp1(node a, node b)
{
    if(a.l==b.l)
        return a.r<b.r;

    return a.l<b.l;
}

bool cmp2(node a, node b)
{
    if(a.r==b.r)
        return a.l<b.l;

    return a.r<b.r;
}

ll  mp[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,x;
    int l,r;
    ll ans=inf, c;

    sff(n,x);
    for(i=0;i<N;i++)mp[i]=inf;

    node temp;
    vector<node> ls, rs;

    for(i=0;i<n;i++)
    {
        sff(l,r);
        sfl(c);

        temp.l=l, temp.r=r;
        temp.c=c;

        ls.pb(temp), rs.pb(temp);
    }

    sort(ls.begin(), ls.end(), cmp1);
    sort(rs.begin(), rs.end(), cmp2);

    j=0;
    for(i=0;i<n;i++)
    {
        while(rs[j].r < ls[i].l)
            mp[rs[j].r - rs[j].l + 1] = min(mp[rs[j].r - rs[j].l + 1] , rs[j].c), j++;

        k = ls[i].r - ls[i].l + 1;
        if(k<=x)
            ans=min(mp[x-k]+ls[i].c, ans);
    }

    if(ans != inf)
        pfl(ans);

    else
        pfs("-1\n");

    return 0;
}
