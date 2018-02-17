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
#define N 30
#define inf 1000000
#define pp pair<char, char>

using namespace std;

bool vis[N], pres[N];
int parent[N];
set<int> adj[N];
set<pp> ans;

void dfs(int s)
{
	vis[s] = 1;
	
	set<int>::iterator it = adj[s].begin();
	while (it!=adj[s].end())
	{
		if (!vis[*it])
		{
			parent[*it] = s;
			dfs(*it);
		}

		it++;
	}
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, p;
	string s, t;

	cin >> n;
	cin >> s >> t;

	memset(vis, 0, sizeof(vis));
	memset(parent, -1, sizeof(parent));

	for (i = 0; i < n; i++)
	{
		pres[s[i] - 'a'] = 1;
		pres[t[i] - 'a'] = 1;

		if (s[i] != t[i])
		{
			adj[s[i] - 'a'].insert(t[i]-'a');
			adj[t[i] - 'a'].insert(s[i] - 'a');
		}
	}

	for (i = 0; i < 26; i++)
	{
		if(pres[i] && !vis[i])
			dfs(i);
	}

	for (i = 0; i < 26; i++)
	{
		if (parent[i]>=0)
		{
			if (ans.find({ parent[i],i }) != ans.end())
				continue;
			else
				ans.insert({ i + 'a',parent[i] + 'a' });
		}
	}

	cout << ans.size() << endl;
	set<pp>::iterator it = ans.begin();
	while (it!=ans.end())
	{
		pp ch = *it;
		cout << ch.first << " " << ch.second << endl;

		it++;
	}

	return 0;
}
