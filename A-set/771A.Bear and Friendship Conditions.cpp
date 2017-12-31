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
#include<string>
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 150010
#define inf 1000000000
#define pp pair<int,int>

using namespace std;

class DisjointSetUnion
{
	int n;
	int *p, *r;
public:
	DisjointSetUnion(int n)
	{
		this->n = n;
		p = new int[n + 1];
		r = new int[n + 1];

		for (int i = 0; i <= n; i++)
			r[i] = 1, p[i] = i;
	}

	void Union(int a, int b)
	{
		int x = Find(a);
		int y = Find(b);

		if (r[x] > r[y])
		{
			p[y] = x;
			r[x] += r[y];
		}

		else
		{
			p[x] = y;
			r[y] += r[x];
		}
	}

	int Find(int x)
	{
		if (p[x] == x)
			return x;

		return p[x] = Find(p[x]);
	}
};

vector<int> adj[N];
vector<int> st[N];

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int u, v;
	ll x, y;

	scanf("%d%d", &n, &m);
	DisjointSetUnion dsu(n);

	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &u, &v);
		
		dsu.Union(u, v);
		adj[u].push_back(v); adj[v].push_back(u);
	}
	
	for (i = 1; i <= n; i++)
	{
		k = dsu.Find(i);
		st[k].push_back(i);
	}

	for (i = 1; i <= n; i++)
	{
		if (st[i].size() > 0)
		{
			x = 0;
			for (j = 0; j < st[i].size(); j++)
				x += adj[st[i][j]].size();

			x /= 2;

			y = st[i].size();
			y = y*(y - 1) / 2;

			if (x == y)
				continue;
			else
			{
				printf("NO\n");
				return 0;
			}
		}
	}

	printf("YES\n");

	return 0;
}
