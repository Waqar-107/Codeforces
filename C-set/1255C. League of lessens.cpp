/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
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
#define pp pair<ll, ll>

using namespace std;

int cnt[N];
bool vis[N];
vector<int> adj[N];

bool cmp(int a, int b){
    return cnt[a] < cnt[b];
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sf(n);
    memset(cnt, 0, sizeof(cnt));

    int a, b, c;
    for(i = 0; i < n - 2; i++)
    {
        cin >> a >> b >> c;

        cnt[a]++, cnt[b]++, cnt[c]++;
        adj[a].pb(b); adj[b].pb(a);
        adj[a].pb(c); adj[c].pb(a);
        adj[b].pb(c); adj[c].pb(b);
    }

    k = -1;
    for(i = 1; i <= n; i++)
    {
        //cout<<i<<" "<<cnt[i];nl;
        if(cnt[i] == 1){
            k = i;
            break;
        }
    }

    queue<int> q;
    q.push(k);
    vis[k] = true;

    vector<int> vec;
    vec.pb(k);

    while(!q.empty())
    {
        m = q.front();
        q.pop();

        sort(adj[m].begin(), adj[m].end(), cmp);

        for(int e : adj[m])
        {
            if(!vis[e])
            {
                vis[e] = true;
                q.push(e);
                //cout<<"pushing "<<e <<" src "<<m;nl;
                vec.pb(e);
            }

            //else
              //  cout<<"visited "<<e<<" from" << m;nl;
        }
    }

     for(int e : vec)
        pf(e), pfs(" ");


    return 0;
}

