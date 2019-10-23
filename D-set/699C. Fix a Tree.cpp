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

int a[N], vis[N], cyc[N], par[N];
void cycle_remover(int s)
{
    vis[s] = grey;

    // root
    if(s == a[s])
    {
        vis[s] = black;
        return;
    }

    if(vis[a[s]] == white)
        cycle_remover(a[s]);

    else if(vis[a[s]] == black)
    {
        vis[s] = black;
        return;
    }

    else
        a[s] = s, cyc[s] = 1;

    vis[s] = black;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sf(n);
    for(i = 1; i <= n; i++) sf(par[i]), a[i] = par[i];

    memset(cyc, 0, sizeof(cyc));
    memset(vis, white, sizeof(vis));

    for(i = 1; i <= n; i++)
    {
        if(!vis[i])
            cycle_remover(i);
    }

    vector<int> vec;
    for(i = 1; i <= n; i++)
    {
        if(i == a[i])
            vec.pb(i);
    }

    int root = vec[0];
    for(i = 0; i < vec.size(); i++)
    {
        if(!cyc[vec[i]])
        {
            root = vec[i];
            break;
        }
    }

    for(i = 0; i < vec.size(); i++)
    {
        if(vec[i] != root)
            a[vec[i]] = root;
    }

    int ans = 0;
    for(i = 1; i <= n; i++)
    {
        if(par[i] != a[i])
            ans++;
    }

    pf(ans); nl;
    for(i = 1; i <= n; i++)
        cout << a[i] << " ";


    return 0;
}
