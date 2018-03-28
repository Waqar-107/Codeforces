#define _CRT_SECURE_NO_WARNINGS

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
#include<sstream>
#include<string>
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 100010
#define inf 100000000000
#define pp pair<int,ll>

using namespace std;

int c[N];
bool f;
vector<int> adj[N];

bool dfs(int s,int col, int p)
{
	bool flag = 1;
	for (int e : adj[s])
	{
		//cout << s << " " << e;nl
		if (c[e] == c[s] && e != p)
			flag = flag & dfs(e, c[s], s);

		else if (c[e] != c[s] && e != p)
			return 0;
	}

	return flag;
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int p, m, n;
	int u, v, w;

	vector<pp> edge;

	scanf("%d", &n);
	for (i = 0; i < n - 1; i++)
	{
		scanf("%d%d", &u, &v);

		adj[u].push_back(v);
		adj[v].push_back(u);

		edge.push_back({ u,v });
	}

	for (i = 1; i <= n; i++)
		scanf("%d", &c[i]);

	bool f1, f2;
	for (i = 0; i < n - 1; i++)
	{
		u = edge[i].first;
		v = edge[i].second;

		if (c[u] == c[v])
			continue;

		//if u and v have different colors one of them must be the root, otherwise it is not possible to fulfill the condition

		//try u
		f1 = 1;
		for (int e : adj[u])
		{
			if (!dfs(e, c[e], u))
			{
				f1 = 0;
				break;
			}
		}

		//try v
		f2 = 1;
		for (int e : adj[v])
		{
			//cout << e << " " << c[e] << " " << v; nl
			if (!dfs(e, c[e], v))
			{
				f2 = 0;
				break;
			}
		}

		if (f1 || f2)
		{
			if (f1)
				printf("YES\n%d\n", u);
			else
				printf("YES\n%d\n", v);

			return 0;
		}

		else
		{
			printf("NO\n");
			return 0;
		}
	}

	printf("YES\n1\n");

	return 0;
}
