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

    sf(n);

    int a[n]; ll d[n], sum=0;
    memset(d,0,sizeof(d));

    for(i=0;i<n;i++)
        sf(a[i]), sum+=a[i];

    d[n-1]=a[n-1];
    for(i=n-2;i>=0;i--)
        d[i]=d[i+1]+a[i];

    ll ans=0;
    set<ll> s;

    for(i=n-1;i>0;i--)
    {
        sum-=a[i];
        s.insert(d[i]);

        if(s.find(sum)!=s.end())
            ans=max(sum,ans);
    }

    pfl(ans);

    return 0;
}
