/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,m,aa;

    cin>>n>>aa;
    ll a[n];

    map<ll,ll> mp;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]==aa)
        {
            mp[aa]++;continue;
        }

        if(mp[a[i]]!=-1)
        {
            if(mp[aa]<=mp[a[i]])
                mp[a[i]]++;
            else
                mp[a[i]]=-1;
        }
    }

    j=-1;
    map<ll,ll>::iterator p=mp.begin();
    while(p!=mp.end())
    {
        //cout<<p->first<<" "<<p->second<<endl;
        if(p->second!=-1 && p->first!=aa && p->second>=mp[aa])
        {
            j=p->first;
            break;
        }

        p++;
    }

    cout<<j;

    return 0;
}
