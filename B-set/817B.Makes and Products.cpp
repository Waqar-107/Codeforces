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
    ll n;

    cin>>n;
    ll x[n];

    map<ll,ll> mp;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        mp[x[i]]++;
    }

    sort(x,x+n);

    ll a=x[0],b=x[1],c=x[2];

    if(a!=b && b!=c)
    {
        cout<<(mp[a]*mp[b]*mp[c])<<endl;
    }

    else if(a==b && b!=c)
    {
        cout<<(mp[c])<<endl ;
    }

    else if(a!=b && b==c)
    {
        k=mp[b]-1;
        j=0;

        while(k){j+=k;k--;}

        cout<<j<<endl;
    }

    else if(a==b && b==c)
    {
        k=mp[a];j=1;
        ll q=k-2;

        while(k>3)
        {
            j+=(q*(q+1))/2;
            //cout<<j<<" "<<k<<endl;
            q--;k--;
        }

        cout<<j;
    }

    return 0;
}
