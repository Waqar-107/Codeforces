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
#define pp pair<int,int>

using namespace std;

vector<int> adj[N];
int original[N], goal[N];
vector<int> ans;

void dfs(int s, int g, int p, int from)
{
	//cout << s << " " << g << " " << p << " " << from;nl
	int np = p, ng = g;

	//apply
	if (g % 2 == 0 && goal[s] != original[s])
		ng++, ans.push_back(s);

	else if (g % 2 == 1 && goal[s] == original[s])
		ng++, ans.push_back(s);

	for (int e : adj[s])
	{
		if (e != from)
			dfs(e, np, ng, s);
	}
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int t, m, n;
	int u, v, c;

	scanf("%d", &n);
	for (i = 0; i < n - 1; i++)
	{
		scanf("%d%d", &u, &v);

		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	for (i = 1; i <= n; i++)
		scanf("%d", &original[i]);

	for (i = 1; i <= n; i++)
		scanf("%d", &goal[i]);

	dfs(1, 0, 0, -1);

	printf("%d\n", ans.size());
	for (int e : ans)
		printf("%d\n", e);

	return 0;
}
