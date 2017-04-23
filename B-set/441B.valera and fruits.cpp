#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll i,j,k;
    ll n,v,temp;
    ll count=0;

    cin>>n>>v;
    map<ll,ll> mp;

    for(i=0;i<=3001;i++)
        mp[i]=0;

    for(i=0; i<n; i++)
    {
        cin>>j>>k;
        mp[j]+=k;
    }

    ll ager, ajke;
   for(i=0;i<=3001;i++)
   {
       ager=i-1;
       ajke=i;

       if(mp[ager]>v)
       {
           count+=v;
       }

       else
       {
           count+=mp[ager];
           temp=v-mp[ager];

           if(temp>mp[ajke])
           {
               count+=mp[ajke];
               mp[ajke]=0;
           }

           else
           {
               count+=temp;
               mp[ajke]-=temp;
           }
       }
   }

    cout<<count<<endl;


    return 0;
}
