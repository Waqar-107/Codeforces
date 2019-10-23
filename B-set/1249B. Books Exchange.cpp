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
     
    using namespace std;
     
    bool vis[N];
    vector<int> adj[N];
    vector<int> vec;
     
    void dfs(int s)
    {
        vis[s] = true;
        vec.pb(s);
     
        for(int e : adj[s])
        {
            if(!vis[e])
                dfs(e);
        }
    }
     
    int main()
    {
        //freopen("in.txt", "r", stdin);
     
        int i, j, k;
        int n, m, t;
     
        sf(t);
        while(t--)
        {
            sf(n);
     
            for(i = 1; i <= n; i++)
                adj[i].clear();
     
            int ans[n + 1];
            for(i = 1; i <= n; i++)
            {
                sf(m);
                adj[i].pb(m);
            }
     
            memset(vis, 0, sizeof(vis));
            for(i = 1; i <= n; i++)
            {
                if(!vis[i])
                {
                    vec.clear();
                    dfs(i);
     
                    for(int e : vec)
                        ans[e] = vec.size();
                }
            }
     
            for(i = 1; i <= n; i++)
                pf(ans[i]), pfs(" ");
     
            nl;
        }
     
        return 0;
    }
