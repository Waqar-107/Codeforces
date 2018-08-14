/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 100005
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    ll i,j,k;
    ll n,m;

    sffl(n,k);

    ll a[n];
    set<ll> s;

    for(i=0;i<n;i++)
        sfl(a[i]);

    sort(a,a+n);

    for(i=0;i<n;i++)
    {
        if(a[i]%k==0)
        {
            if(s.find(a[i]/k)==s.end())
                s.insert(a[i]);
        }

        else
            s.insert(a[i]);
    }

    pf(s.size());

    return 0;
}
