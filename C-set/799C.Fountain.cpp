/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");

#define pb push_back
#define pp pair<int,int>

using namespace std;

int solve(vector<pp> v,int price)
{
    if(v.size()<2) return 0;

    vector<int> p,b;

    for(int i=0;i<v.size();i++)
        p.pb(v[i].first), b.pb(v[i].second);

    int amx[v.size()];

    amx[0]=b[0];
    for(int i=1;i<b.size();i++)
        amx[i]=max(amx[i-1],b[i]);

    int ans=0;
    for(int i=1;i<v.size();i++)
    {
        //from beginning till ith, we search and select an id other than i
        //id will have something greater than price-p[i] so we decrement it by 1
        int id=upper_bound(p.begin(),p.begin()+i,price-p[i])-p.begin();

        //if price-p[i] is greater than p[i]
        if(id>=i+1) continue;
        id--;

        if(id<0) continue;

        if(id!=i)
            ans=max(ans,b[i]+amx[id]);
    }

    return ans;
}

int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    int c,d;
    int x,y;
    char ch;

    cin>>n>>c>>d;

    int mc=0,md=0;
    vector<pp> coins, diamonds;

    for(i=0;i<n;i++)
    {
        cin>>x>>y>>ch;

        //c+d
        if(ch=='C') {
            if(c>=y)
                mc=max(mc,x), coins.pb({y,x});
        }

        else {
            if(d>=y)
                md=max(md,x), diamonds.pb({y,x});
        }
    }

    int ans=0;
    if(mc>0 && md>0)
        ans=mc+md;

    //c+c or d+d
    sort(coins.begin(),coins.end());
    sort(diamonds.begin(),diamonds.end());

    ans=max(ans,solve(coins,c));
    ans=max(ans,solve(diamonds,d));

    pf(ans);

    return 0;
}
