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

using namespace std;

int color[N];
bool vis[N];
vector<int> adj[N];
stack<int> st;

void dfs(int s)
{
	if (!color[s])
	{
		color[s] = 1; 

		for (int e : adj[s])
			dfs(e);

		color[s] = 2;
		st.push(s);
	}

	//cycle
	else if (color[s] == 1)
	{
		cout << "Impossible\n";
		exit(0);
	}
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, p;

	cin >> n;

	string *s = new string[n];
	for (i = 0; i < n; i++)
		cin >> s[i];

	for (i = 1; i < n; i++)
	{
		k = 0;
		m = min(s[i].length(), s[i - 1].length());
		for (j = 0; j < m; j++)
		{
			if (s[i][j] != s[i - 1][j])
			{
				k = 1;
				adj[s[i-1][j] - 'a'].push_back(s[i][j] - 'a');
				break;
			}
		}

		//aa, a
		if (!k)
		{
			if (s[i].length() < s[i - 1].length()) {
				cout << "Impossible\n";
				return 0;
			}
		}
	}

	memset(color, 0, sizeof(color));
	for (i = 0; i < 26; i++)
	{
		if (!color[i])
			dfs(i);
	}

	while (!st.empty())
	{
		cout << (char)(st.top()+'a');
		st.pop();
	}

	return 0;
}
