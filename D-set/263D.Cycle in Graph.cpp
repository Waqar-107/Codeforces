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
#define inf 100000
#define pp pair<int,int>

using namespace std;

bool found, done;
vector<int> adj[N];
vector<int> ans;
int parent[N];
int start_time[N], st, req, target;

void dfs(int s)
{
	if (done || found)
		return;

	start_time[s] = st;
	st++;

	for (int e : adj[s])
	{
		if (done || found)
			break;

		if (!start_time[e])
			parent[e]=s, dfs(e);

		//cycle found
		else if(start_time && e!=parent[e])
		{
			if (start_time[s] - start_time[e] + 1 >= req)
			{
				target = e;
				found = 1;
				ans.push_back(s);
				return;
			}
		}
	}

	if (found && !done)
		ans.push_back(s);

	if (s == target)
		done = 1;
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int x, y;

	scanf("%d%d%d", &n, &m, &req);

	req++;
	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &x, &y);

		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	memset(parent, 0, sizeof(parent));
	memset(start_time, 0, sizeof(start_time));
	st = 1;

	found = 0; done = 0;

	dfs(1);

	printf("%d\n", ans.size());
	for (int e : ans)
		printf("%d ", e);

	return 0;
}
