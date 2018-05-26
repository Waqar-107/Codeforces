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
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 100010
#define pp pair<int,int>
#define D(x) cout << #x " = " << (x) << endl

using namespace std;

int cnt[N];
set<int> hate[N];
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

int main()
{
	freopen("in2.txt","r",stdin);

	int i, j, k;
	int n, m;
	int u, v;

	scanf("%d%d", &n, &m);

	DisjointSetUnion like(n);
	for (i = 1; i <= m; i++)
	{
		scanf("%d%d", &u, &v);
		like.Union(u, v);
	}

	memset(cnt, 0, sizeof(cnt));
	for (i = 1; i <= n; i++)
		cnt[like.Find(i)]++;

	scanf("%d", &k);
	while (k--)
	{
		scanf("%d%d", &u, &v);

		if (like.Find(u) == like.Find(v)) {
			cnt[like.Find(u)] = 0;
		}
	}

	k = 0;
	for (i = 1; i <= n; i++)
		k = max(k, cnt[i]);
		
	printf("%d\n", k);

	return 0;
}
