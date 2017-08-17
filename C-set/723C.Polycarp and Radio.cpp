/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define N 50

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m,count;
    map<ll,ll> mp;

    cin>>n>>m;

    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i],mp[a[i]]++;

    ll x=n/m;
    count=0;

    //----------------------------------------first replace those>m
    stack<ll> s;
    for(i=1;i<=m;i++)
    {
        if(mp[i]<x)
            s.push(i);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>m && s.size()>0)
        {
            a[i]=s.top();
            mp[a[i]]++;
            count++;

            if(mp[a[i]]==x)
                s.pop();
        }
    }
    //----------------------------------------

    //----------------------------------------if still some of the elements are less than x, replace them with those>x
    for(i=0;i<n;i++)
    {
        if(s.size()==0)
            break;

        if(mp[a[i]]<=x)
            continue;

        else
        {
            mp[a[i]]--;
            a[i]=s.top();
            mp[a[i]]++;
            count++;

            if(mp[a[i]]>=x)
                s.pop();
        }
    }
    //----------------------------------------

    cout<<x<<" "<<count<<endl;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
