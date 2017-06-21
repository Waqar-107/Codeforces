/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

bool cmp(ll a, ll b)
{
    ll x=10-(a%10);
    ll y=10-(b%10);

    if(x==0)
        return x>y;

    else
        return x<y;
}

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,p,x;

    cin>>n>>p;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n,cmp);

    //rounding up
    for(i=0;i<n;i++)
    {
        x=10-(a[i]%10);

        if(p<x)
            break;

        if(a[i]==100)
            continue;

        a[i]+=x;
        p-=x;
    }

    //give away some extra
    for(i=0;i<n;i++)
    {
        if(p<=0 || p<10)
            break;

        if(a[i]==100)
            continue;

        x=100-a[i];

        if(x<p)
        {
            a[i]=100;
            p-=x;
        }

        else
        {
            a[i]+=p;break;
        }
    }

    ll sum=0;
    for(i=0;i<n;i++)
        sum+=(a[i]/10);

    cout<<sum;

    return 0;
}
