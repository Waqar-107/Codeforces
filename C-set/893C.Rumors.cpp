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

#define dbg printf("in\n");
#define nl printf("\n");
#define N 100010
#define inf 10000000000
#define pi 2*acos(0.0)
#define pp pair<int,int>
#define mod 1000000007

using namespace std;

ll clc[N];

class DisjointSetUnion
{
	int n;
	int *p, *r;

public:
	DisjointSetUnion(int x)
	{
		n = x;

		p = new int[n + 1];
		r = new int[n + 1];

		for (int i = 1; i <= n; i++)
			p[i] = i, r[i] = 1;

	}

	void Union(int x, int y)
	{
		int a = Find(x);
		int b = Find(y);

		if (r[a]>r[b])
		{
			p[b] = a;
			r[a] += r[b];
		}

		else
		{
			p[a] = b;
			r[b] += r[a];
		}
	}

	int Find(int a)
	{
		if (p[a] == a)
			return a;

		return p[a] = Find(p[a]);
	}
};

int main()
{
	//freopen("in2.txt", "r", stdin);
	
	int i, j, k;
	int n, m, l;
	int a, b;
	
	scanf("%d%d", &n,&m);

	ll *c = new ll[n+1];
	for (i = 1; i <= n; i++)
		scanf("%I64d", &c[i]);

	DisjointSetUnion dsu(n);

	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &a, &b);

		if (dsu.Find(a) != dsu.Find(b))
			dsu.Union(a, b);
	}
	
	ll sum = 0;
	for (i = 0; i < N; i++)
		clc[i] = inf;

	int *parent = new int[n+1];
	vector<int> v;

	for (i = 1; i <= n; i++)
	{
		parent[i] = dsu.Find(i); 

		if (parent[i] == i)
			v.push_back(i);
		else
			clc[parent[i]] = min(clc[parent[i]], c[i]),c[i]=-1;
	}
	
	for (i = 1; i <= n; i++)
	{
		//now get the c[i]
		if (clc[i] != inf)
		{
			clc[i] = min(c[i], clc[i]);
			sum += clc[i]; c[i] = -1;
		}
	}
	
	for (i = 0; i <v.size(); i++)
	{
		if (c[v[i]] != -1)
			sum += c[v[i]];
	}

	printf("%I64d\n", sum);
	return 0;
}
