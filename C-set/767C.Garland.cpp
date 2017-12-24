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
#define N 1000010
#define inf 1000000000

using namespace std;

int x, y;
vector<int> adj[N]; vector<int> v;
int t[N], dist[N];

int dfs(int s)
{
	int cnt = t[s];

	for (int e : adj[s])
	{
		y = dfs(e);

		if (y == x && v.size() < 2)
			v.push_back(e);
		else
			cnt += y;

	}

	dist[s] = cnt;

	return cnt;
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int r, tm;

	scanf("%d", &n);

	x = 0;
	for (i = 1; i <= n; i++)
	{
		scanf("%d%d", &m, &tm);

		if (!m)
			r = i;
		else
			adj[m].push_back(i);

		t[i] = tm; x += tm;
	}

	if (x % 3 != 0)
	{
		printf("-1\n");
		return 0;
	}

	x = x / 3;
	dfs(r);

	if (v.size() != 2)
		printf("-1\n");

	else
		printf("%d %d\n", v[0], v[1]);

	return 0;
}
