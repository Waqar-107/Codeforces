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
#define N 200010
#define inf 100000
#define pp pair<int,int>

using namespace std;

set<int> s;
set<int> adj[N];
int vc;

void dfs(int src)
{
	if (s.find(src) != s.end())
		vc++;

	s.erase(src);

	set<int>::iterator it;
	for (it = s.begin(); it != s.end();)
	{
		if (adj[src].find(*it) == adj[src].end())
		{
			int temp = *it;
			s.erase(temp); vc++;

			dfs(temp); it = s.lower_bound(temp);
		}

		else
			it++;
	}
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int x, y;

	scanf("%d%d", &n, &m);

	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &x, &y);

		adj[x].insert(y);
		adj[y].insert(x);
	}

	for (i = 1; i <= n; i++)
		s.insert(i);

	int cnt = 0;
	set<int> :: iterator p;

	vector<int> v;
	while (s.size())
	{
		p = s.begin();

		cnt++; vc = 0;
		dfs(*p);

		v.push_back(vc);
	}

	sort(v.begin(), v.end());

	printf("%d\n", cnt);
	for (i = 0; i < cnt; i++)
		printf("%d ", v[i]);

	return 0;
}
