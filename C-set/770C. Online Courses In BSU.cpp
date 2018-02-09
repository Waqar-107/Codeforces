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
#define inf 1000000

using namespace std;

int cyc;
vector<int> st;
int color[N];
vector<int>adj[N];

void dfs(int s)
{
	if (!color[s])
	{
		color[s] = 1;

		for (int e : adj[s])
			dfs(e);

		color[s] = 2;
		st.push_back(s);
	}

	else if (color[s] == 1)
	{
		printf("-1");
		exit(0);
	}
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int u, v;

	scanf("%d%d", &n, &m);

	int *a = new int[n];
	for (i = 0; i < m; i++)
		scanf("%d", &a[i]);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &k);
		for (j = 0; j < k; j++)
		{
			scanf("%d", &u);
			adj[i].push_back(u);
		}
	}

	memset(color, 0, sizeof(color));
	for (i = 0; i < m; i++)
	{
		if (!color[a[i]])
			dfs(a[i]);
	}

	printf("%d\n", st.size());
	for (i = 0; i < st.size(); i++)
		printf("%d ", st[i]);

	return 0;
}
