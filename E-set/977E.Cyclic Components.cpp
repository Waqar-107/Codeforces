/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 200100
#define pp pair<ll,ll>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb push_back

using namespace std;

bool vis[N];
vector<int> adj[N];
stack<int> st;

void dfs(int s)
{
    vis[s]=1;
    for(int e : adj[s])
    {
        if(!vis[e])
            dfs(e);
    }

    st.push(s);
}

int main()
{
	//freopen("in.txt", "r", stdin);

	int i,j,k;
	int n,m;
	int u,v;

	sff(n,m);
	for(i=0;i<m;i++)
    {
        sff(u,v);

        adj[u].pb(v);
        adj[v].pb(u);
    }

    int cnt=0;
    for(i=1;i<=n;i++)
    {
        if(!vis[i])
            dfs(i);

        k=1;
        if(st.size()>2)
        {
            //check if all the elements have two neighbours
            while(!st.empty())
            {
                if(adj[st.top()].size()!=2){
                    k=0;
                    break;
                }

                st.pop();
            }

            if(k)
                cnt++;
        }

        while(!st.empty())
            st.pop();
    }

    pf(cnt);

	return 0;
}
