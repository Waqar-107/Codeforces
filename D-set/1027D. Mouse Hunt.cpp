/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 201010
#define inf 1e9

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int, int>

#define white 0
#define grey 1
#define black 2

using namespace std;

ll ans;
stack<int> stk;
vector<int> adj[N];
int color[N];
int cost[N];

void dfs(int s)
{
    color[s] = grey;
    stk.push(s);

    for(int e : adj[s])
    {
        if(color[e] == white)
            dfs(e);
        else if(color[e] == grey)
        {
            // cycle found
            //cout<<"cycle found"<<endl;
            //cout<<e<<" "<<s<<endl;
            int mn = cost[e];
            while(stk.size())
            {
                if(stk.top() == e) break;
                mn = min(mn, cost[stk.top()]);
                stk.pop();
            }

            ans += mn;
            //cout<<"mn "<<mn;nl;
            break;
        }
    }

    color[s] = black;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sf(n);
    for(i = 1; i <= n; i++)
        sf(cost[i]);

    for(i = 1; i <= n; i++)
    {
        sf(m);
        adj[i].pb(m);
    }

    memset(color, white, sizeof(color));

    ans = 0;
    for(i = 1; i <= n; i++)
    {
        if(!color[i])
        {
            while(stk.size())
                stk.pop();

            dfs(i);
        }
    }

    pfl(ans);

    return 0;
}

