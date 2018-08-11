/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 200100

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

#define white 0
#define grey 1
#define black 2


using namespace std;

int color[N], cyc;
int dp[N][2], parent[N][2];
vector<int> adj[N];

void cycle(int s)
{
    color[s]=grey;

    for(int e : adj[s])
    {
        if(color[e]==grey)
        {
            cyc=1;
            return;
        }

        else if(color[e]==white)
            cycle(e);
    }

    color[s]=black;
}

void dfs(int s,int state)
{
    dp[s][state]=1;

    for(int e : adj[s])
    {
        if(!dp[e][state^1])
            parent[e][state^1]=s, dfs(e,state^1);
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    sff(n,m);
    for(i=1;i<=n;i++)
    {
        sf(k);
        while(k--)
        {
            sf(m);
            adj[i].pb(m);
        }
    }

    cyc=0;
    memset(color,white,sizeof(color));

    int s;
    sf(s);

    cycle(s);

    memset(dp,0,sizeof(dp));
    dfs(s,0);

    for(i=1;i<=n;i++)
    {
        if(!adj[i].size() && dp[i][1])
        {
            pfs("Win\n");

            k=i, j=1;
            stack<int> stk;

            while(1)
            {
                stk.push(k);
                if(k==s && !parent[k][j]) break;

                k=parent[k][j];j^=1;
            }

            while(!stk.empty())
            {
                pf(stk.top());
                stk.pop();
            }

            return 0;
        }
    }

    if(cyc)
        pfs("Draw\n");

    else
        pfs("Lose\n");

    return 0;
}
