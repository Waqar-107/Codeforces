#define _CRT_SECURE_NO_WARNINGS

/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cctype>
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
#include<sstream>
#include<stack>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 300010
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<string,int>
const int mod = 998244353;

using namespace std;

bool f;
int color[N];
ll co[2], p[N];
vector<int> adj[N];

void dfs(int s, int c)
{
	if (f)return;

	color[s] = c;
	co[c]++;

	for (int e : adj[s])
	{
		if (color[e] == -1)
			dfs(e, 1 - c);

		else if (color[e] == c) {
			f = true;
			return;
		}
	}
}

int main()
{
	//freopen("in2.txt","r",stdin);

	int i, j, k;
	int n, m, t;
	int u, v;

	p[0] = 1;
	for (i = 1; i < N; i++)
		p[i] = (2 * p[i - 1]) % mod;

	sf(t);
	while(t--)
	{
	    sff(n, m);
		for (i = 1; i <= n; i++)
		    adj[i].clear(), color[i] = -1;

		
		for (i = 0; i < m; i++)
		{
			sff(u, v);

			adj[u].pb(v);
			adj[v].pb(u);
		}

		ll cnt = 1, cnt2;
		for (i = 1; i <= n; i++)
		{
			if (color[i] == -1)
			{
				f = false;
				co[0] = co[1] = 0;

				dfs(i, 0);

				if (f)
					break;

				cnt2 = (p[co[0]] + p[co[1]]);
				cnt2 %= mod;
				cnt = (cnt * cnt2) % mod;
			}
		}

		if (!f)
			pfl(cnt), nl;
		else
			pf(0), nl;
	}


	return 0;
}
