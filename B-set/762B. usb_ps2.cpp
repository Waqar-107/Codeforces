/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,string>
#define dbg printf("xxxx");
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    ll i,j,k;
    ll a,b,c;
    ll n,m;
    string s;
    deque<ll> u;deque<ll> p;

    cin>>a>>b>>c>>m;

    for(i=0;i<m;i++)
    {
        cin>>n>>s;

        if(s=="USB")
            u.push_back(n);
        else
            p.push_back(n);
    }

    sort(u.begin(),u.end());
    sort(p.begin(),p.end());


    ll sum=0,count=0;

    while(a>0 && u.size()>0)
    {
        count++; sum+=u.front();
        u.pop_front();a--;
    }

    while(b>0 && p.size()>0)
    {
        count++; sum+=p.front();
        p.pop_front();b--;
    }

    vector<ll> v;
    v.assign(p.begin(),p.end());
    for(i=0;i<u.size();i++)
        v.push_back(u[i]);


    sort(v.begin(),v.end());

    vector<ll>::iterator w=v.begin();
    while(c>0 && w!=v.end())
    {
        count++; sum+=*w;
        w++;c--;
    }

    cout<<count<<" "<<sum;

    return 0;

}

