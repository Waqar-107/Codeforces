/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");
#define S 300000
#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,q,m;
    ll l,r,count=0;

    scanf("%I64d%I64d",&n,&q);

    ll a[n];
    for(i=0;i<n;i++)
        scanf("%I64d",&a[i]);

    ll x[S];
    memset(x,0,sizeof(x));

    for(i=0;i<q;i++)
    {
        scanf("%I64d%I64d",&l,&r);
        x[l]++;x[r+1]--;
    }

    for(i=1;i<=n;i++)
        x[i]+=x[i-1];

    sort(x+1,x+n+1);
    sort(a,a+n);

    for(i=0;i<n;i++)
        count+=(a[i]*x[i+1]);

    printf("%I64d",count);

    return 0;
}
