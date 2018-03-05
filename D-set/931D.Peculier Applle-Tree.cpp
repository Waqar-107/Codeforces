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

using namespace std;

int cnt, dist[N];
vector<int> adj[N];
void bfs()
{
	memset(dist, 0, sizeof(dist));

	queue<pp> q;

	pp x;
	q.push({ 1,0 });

	while (!q.empty())
	{
		x = q.front(); q.pop();
		dist[x.second]++;

		for (int e : adj[x.first])
		{
			q.push({ e,x.second + 1 });
		}
	}
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	
	scanf("%d", &n);

	for (i = 2; i <= n; i++)
	{
		scanf("%d", &m);
		adj[m].push_back(i);
	}
	
	bfs();
	for (i = 0; i < N; i++)
	{
		if (dist[i] % 2)
			cnt++;
	}
	
	printf("%d\n", cnt);

	return 0;
}
