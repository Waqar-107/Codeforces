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
#define N 310
#define pp pair<int,int>

using namespace std;

int a[N], ans[N], mp[N];
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
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	string s;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]), mp[a[i]] = i;

	DisjointSetUnion dsu(n);
	for (i = 1; i <= n; i++)
	{
		cin >> s;
		for (j = 1; j <= n; j++)
		{
			if (s[j-1]=='1')
				dsu.Union(i, j);
		}
	}

	vector<int> v;
	vector<int> idx;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (dsu.Find(j) == i)
				v.push_back(a[j]), idx.push_back(mp[a[j]]);
		}
		
		sort(v.begin(), v.end());
		sort(idx.begin(), idx.end());

		for (j = 0; j < v.size(); j++)
			ans[idx[j]] = v[j];

		v.clear(); idx.clear();
	}

	for (i = 1; i <= n; i++)
		printf("%d ", ans[i]);

	return 0;
}
