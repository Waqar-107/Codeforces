/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100100
#define inf 1000000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%lld%lld",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int s[N], arr[N], lvl[N], par[N];
vector<int> adj[N];

void dfs(int src,int p,int a,int l)
{
    lvl[src]=l;
    l++;

    par[src]=p;

    if(src>1)
        arr[src]=max(0, s[src]-a);

    if(s[src]!=-1 && s[src]<a){
        pfs("-1\n");
        exit(0);
    }

    for(int e : adj[src])
    {
        if(e==p)continue;


        if(s[src]==-1)
            dfs(e,src,a,l);
        else
            dfs(e,src,s[src],l);
    }
}

bool cmp(int a,int b)
{
    return lvl[a]>lvl[b];
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    sf(n);
    for(i=2;i<=n;i++)
    {
        sf(k);

        adj[i].pb(k);
        adj[k].pb(i);
    }

    for(i=1;i<=n;i++)sf(s[i]);

    memset(arr,0,sizeof(arr));

    arr[1]=s[1];
    dfs(1,-1,s[1],1);

    vector<int> vec;
    for(i=1;i<=n;i++)
    {
        if(s[i]==-1)
            vec.pb(i);
    }

    sort(vec.begin(),vec.end(),cmp);

    int mn;
    for(int e : vec)
    {
        mn=inf;
        for(int x : adj[e])
        {
            if(x!=par[e])
                mn=min(mn, arr[x]);
        }

        if(mn==inf)continue;

        arr[e]=mn;
        for(int x : adj[e])
        {
            if(x!=par[e])
                arr[x]-=arr[e];
        }
    }

    ll cnt=0;
    for(i=1;i<=n;i++)
        cnt+=arr[i];

    cout<<cnt<<endl;

    return 0;
}
