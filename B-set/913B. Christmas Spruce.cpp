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
#define N 1010
#define inf 1000000000
#define pp pair<int,int>

using namespace std;

vector<int> adj[N];
int leaf[N]; bool vis[N];
bool ext[N];

bool dfs(int s)
{
	int cnt = 0;
	for (int e : adj[s])
	{
		cnt += dfs(e);
	}

	leaf[s] = cnt;

	if (ext[s])
		return 0;
	else
		return 1;
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;

	cin >> n;

	memset(ext, 0, sizeof(ext));
	for (i = 2; i <= n ; i++)
	{
		cin >> m;
		adj[m].push_back(i);
		ext[m] = 1;
	}

	dfs(1);

	for (i = 1; i <= n; i++)
	{
		//cout << ext[i] << " " << leaf[i] << endl;
		if (ext[i] && leaf[i] < 3)
		{
			cout << "No" << endl; return 0;
		}
	}

	cout << "Yes" << endl;

	return 0;
}
