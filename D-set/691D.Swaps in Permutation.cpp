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
#define N 1000010
#define inf 1000000
#define pp pair<char, char>

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

int a[N];
set<int> adj[N];

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, p;

	scanf("%d%d", &n, &m);

	DisjointSetUnion dsu(n);
	
	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &j, &k);
		dsu.Union(j, k);
	}

	for (i = 1; i <= n; i++)
	{
		k = dsu.Find(i);
		adj[k].insert(i);
	}

	vector<int> v;
	set<int>::iterator itr;
	
	for (i = 1; i <= n; i++)
	{
		itr = adj[i].begin();
		while (itr!=adj[i].end())
		{
			v.push_back(a[*itr]);
			itr++;
		}

		itr = adj[i].begin();
		sort(v.begin(), v.end(), greater<int>());

		k = 0;
		while (itr!=adj[i].end())
		{
			a[*itr] = v[k];
			itr++;  k++;
		}

		v.clear();
	}

	for (i = 1; i <= n; i++)
		printf("%d ", a[i]);

	return 0;
}
