/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100100

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
#define pp pair<ll,char>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    ll i,j,k;
    ll n,m;

    cin>>n;

    ll a[n+1];
    map<ll,ll> left;

    for(i=1; i<=n; i++)
        cin>>a[i];

    for(i=1; i<=n; i++)
    {
        if(left[a[i]])
        {
            a[left[a[i]]]=-1;
            left[a[i]]=0;

            a[i]*=2;
            i--;
        }

        else
            left[a[i]]=i;
    }

    vector<ll> ans;
    for(i=1; i<=n; i++)
    {
        if(a[i]!=-1)
            ans.pb(a[i]);
    }

    cout<<ans.size()<<endl;
    for(ll e : ans)
        cout<<e<<" ";

    return 0;
}
