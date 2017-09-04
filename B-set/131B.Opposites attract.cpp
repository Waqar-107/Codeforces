/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>

using namespace std;

struct data
{
    ll f=0,s=0;
};

int main()
{
    freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m;

    cin>>n;

    map<ll,data> mp;
    for(i=0;i<n;i++)
    {
        cin>>m;

        if(!m)
            mp[m].f++;

        else
        {
            if(m>0)
                mp[m].f++;
            else
                mp[m*-1].s++;
        }
    }

    ll count=0;
    map<ll,data>::iterator p=mp.begin();
    while(p!=mp.end())
    {
        if(p->first==0)
        {
            data d=p->second;
            count+=((d.f-1)*d.f)/2;
        }

        else
        {
            data d=p->second;
            count+=(d.f*d.s);
        }

        p++;
    }

    cout<<count;

    return 0;
}
