/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150
#define inf 1000000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

bool cmp(pp a, pp b) {
    return a.second>b.second;
}

bool cmp2(pp a, pp b) {
    return a.first<b.first;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    sff(n,k);

    pp a[n];

    for(i=0;i<n;i++)
    {
        sf(m);
        a[i]={i+1,m};
    }

    sort(a,a+n,cmp);

    int ans=0;
    vector<pp> v;

    for(i=0;i<k;i++)
        ans+=a[i].second, v.pb(a[i]);

    if(k==1){
        pf(ans); nl
        pf(n); return 0;
    }

    sort(v.begin(),v.end(),cmp2);

    //1st one
    pf(ans);nl
    pf(v[0].first);

    m=v.size();
    for(i=1;i<m-1;i++)
        pf(v[i].first-v[i-1].first);

    //last one, covers the rest too
    pf(n-v[m-2].first);

    return 0;
}
