/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");
#define S 210000
#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,q,m,x;
    map<ll,ll> mp;

    cin>>n>>m>>k;
    ll a[n+1];

    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        mp[a[i]]=i;
    }

    ll sum=0;
    for(i=0;i<m;i++)
    {
        cin>>q;

        if(mp[q]%k==0)
        {
            if(mp[q]==k)
                sum++;
            else
                 sum+=(mp[q]/k);
        }

        else
        {
             sum+=(1+mp[q]/k);
        }


        if(mp[q]==1)
            continue;

        else
        {
            j=mp[q];x=a[j-1];
            mp[q]=j-1;mp[x]=j;
            swap(a[j-1],a[j]);
        }
    }

    cout<<sum;

    return 0;
}
