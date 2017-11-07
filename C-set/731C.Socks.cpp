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
#define N 200001
#define pp pair<int,int>

using namespace std;

int p[N], r[N],c[N];
void build(int n)
{

	for (int i = 1; i <= n; i++)
		p[i] = i, r[i] = 1;
}

int Find(int a)
{
	if (p[a] == a)
		return a;

	return p[a] = Find(p[a]);
}

void Union(int x, int y)
{
	int a = Find(x);
	int b = Find(y);

	if (r[a] > r[b])
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

bool cmp(int a, int b)
{
	return c[a] < c[b];
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int a, b;

	scanf("%d%d%d", &n, &m, &k);

	build(n);

	for (i = 1; i <= n; i++)
		scanf("%d", &c[i]);

	int cnt = 0;
	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &a, &b);

		//make the connected components
		Union(a, b);
	}

	vector<vector<int>> v(n + 1);
	for (i = 1; i <= n; i++)
	{
		a = Find(i);
		v[a].push_back(i);
	}

	for (i = 1; i <= n; i++)
	{
		if (v[i].size())
		{
			sort(v[i].begin(), v[i].end(),cmp);

			a = 1; b = 1;
			for (j = 1; j < v[i].size(); j++)
			{
				if (c[v[i][j]] == c[v[i][j - 1]])
					a++;
				else
					b = max(a, b), a = 1;
			}

			b = max(a, b);
			cnt += (v[i].size() - b);
		}
	}

	printf("%d\n", cnt);

	return 0;
}
