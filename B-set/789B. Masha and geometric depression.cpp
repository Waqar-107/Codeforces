/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,ll>
#define inf 1000000000

using namespace std;

int main()
{
    ll i,j,k;
    ll b1,q,l;
    ll m,a;
    map<ll,bool> mp;

    cin>>b1>>q>>l>>m;
    for(i=0;i<m;i++)
        cin>>a,mp[a]=1;

    if(abs(b1)>l)
    {
        cout<<"0";
        return 0;
    }
    
    if(!b1)
    {
        if(!mp[b1])
            cout<<"inf";
        else
            cout<<"0";
        
        return 0;
    }

    if(!q)
    {
        if(mp[0])
        {
            if(!mp[b1])
                cout<<"1";
            else
                cout<<"0";
        }

        else
            cout<<"inf";

        return 0;
    }

    if(q==1)
    {
        if(!mp[b1] && abs(b1)<=l)
            cout<<"inf";
        else
            cout<<"0";

        return 0;
    }

    if(q==-1)
    {
        if(abs(b1)<=l && !mp[b1] && !mp[b1*-1])
            cout<<"inf";
        else if(abs(b1)<=l && mp[b1] && !mp[b1*-1])
            cout<<"inf";
        else if(abs(b1)<=l && !mp[b1] && mp[b1*-1])
            cout<<"inf";
        else
            cout<<"0";

        return 0;
    }

    ll cnt=0;
    while(abs(b1)<=l)
    {
        if(!mp[b1])
            cnt++;

        b1*=q;
    }

    cout<<cnt;

    return 0;
}
