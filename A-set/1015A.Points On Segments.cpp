/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 200100
#define inf 100000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

bool cmp(pp a,pp b)
{
    return a.first>b.first;
}

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int l,r;

    sff(n,m);

    int a[m+1];
    memset(a,0,sizeof(a));

    for(i=0;i<n;i++)
    {
        sff(l,r);
        for(j=l;j<=r;j++)
            a[j]++;
    }

    vector<int> ans;
    for(i=1;i<=m;i++)
    {
        if(!a[i])
            ans.pb(i);
    }

    pf(ans.size());
    pfs("\n");

    for(i=0;i<ans.size();i++)
        pf(ans[i]);

    return 0;
}
