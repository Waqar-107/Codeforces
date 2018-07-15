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

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    sf(n);

    int a[n];
    map<int,int> mp;

    for(i=0;i<n;i++)
        sf(a[i]), mp[a[i]]++;

    bool f;
    int ans=0;

    for(i=0;i<n;i++)
    {
        f=false;
        for(j=0;j<32;j++)
        {
            int x=(1<<j)-a[i];
            if(x==a[i] && mp[x]>1)
                f=true;

            else if(x!=a[i] && mp[x]>=1)
                f=true;
        }

        if(!f)
            ans++;
    }

    pf(ans);

    return 0;
}
