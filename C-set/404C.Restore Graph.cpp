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
#include<stack>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 100100
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

pp dist[N];
int cnt[N];
vector<int> adj[N];

bool cmp(pp a, pp b)
{
	return a.first < b.first;
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, x;
	int u, v, s;

	sff(n, k); x = 0;
	for (i = 1; i <= n; i++)
	{
		sf(m);
		dist[i] = { m,i };

		if (!m) {
			x++;
			s = i;
		}
	}

	if (x != 1) {
		pf(-1);
		return 0;
	}

	sort(dist + 1, dist + n + 1, cmp);

	vector<pp> ans;
	memset(cnt, 0, sizeof(cnt));

	//start from dist[2]
	adj[0].pb(s);
	for (i = 2; i <= n; i++)
	{
		x = dist[i].first - 1;
		
		//if possible to get a node then continue
		//else get the hell out :3

		u = 0;
		while (x>=0 && adj[x].size())
		{
			v = adj[x].back();
			//cout << v <<" "<<cnt[v]<< endl;
			if (cnt[v] < k)
			{
				ans.pb({ dist[i].second,v });
				adj[dist[i].first].pb(dist[i].second);

				u = 1; cnt[dist[i].second]++;
				cnt[v]++; break;
			}

			else
				adj[x].pop_back();
		}

		if (!u) {
			pf(-1);
			return 0;
		}
	}

	pf(ans.size());
	for (i = 0; i < ans.size(); i++)
		pff(ans[i].first, ans[i].second);

	return 0;
}
