/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>
typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<ll,ll>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,x,y;

    map<ll,vector<ll>> mp;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        mp[x].push_back(i);
    }

    vector<pp> v;
    map<ll,vector<ll>>::iterator p=mp.begin();
    while(p!=mp.end())
    {
        k=p->first;

        if(mp[k].size()==1)
            v.push_back({k,0});

        else
        {
            set<ll> s;
            for(i=1;i<mp[k].size();i++)
                s.insert(abs(mp[k][i]-mp[k][i-1]));

            set<ll>::iterator q=s.begin();
            if(s.size()==1)
            v.push_back({k,*q});

        }

        p++;
    }

    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;

    return 0;
}
