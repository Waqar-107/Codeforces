/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");
#define pi 3.1416

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

ll a[2000],n;

ll dfs(ll x)
{
    if(a[x]==-1)
        return 1;

    return 1+dfs(a[x]-1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();

    //freopen("in.txt","r",stdin);

    ll i,j,k;

    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }

    ll max=0,w;
    for(i=0;i<n;i++)
    {
        w=dfs(i);
        max=max2(dfs(i),max);
        //cout<<w<<" "<<i<<endl;
    }

    cout<<max;

    cin.clear();
    cin.ignore();
    cin.get();

    return 0;
}
