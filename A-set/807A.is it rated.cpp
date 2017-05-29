/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();

    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll u,v,n;
    ll l,r,count=0;

    cin>>n;
    pp a[n];

    vector<ll> x;vector<ll> q;
    for(i=0;i<n;i++)
    {
        cin>>u>>v;
        a[i]={u,v};

        if(u==v)
            count++;

        q.push_back(v);x.push_back(v);
    }

    sort(x.begin(),x.end(),greater<ll>());

    if(count!=n)
        cout<<"rated"<<endl;

    else
    {
        if(x==q)
            cout<<"maybe";

        else
            cout<<"unrated";

    }

    cin.clear();
    cin.ignore();
    cin.get();

    return 0;
}
