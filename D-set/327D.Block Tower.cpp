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

#define dbg printf("in\n")
#define nl printf("\n");
#define N 610
#define pp pair<int,int>
#define inf 10000000

using namespace std;

int n, m;
bool vis[N][N];
char s[N][N];

vector<pair<char, pp>> ans;

bool isInside(int r, int c)
{
	if (r >= 1 && c >= 1 && r <= n && c <= m)
		return true;

	return false;
}

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

void dfs(int r, int c)
{
	vis[r][c]=1;

	//make blue first, later we will try making red
	bool f = 0;
	int x, y;
	s[r - 1][c - 1] = 'B';
	ans.push_back({ 'B',{r,c} });

	//traverse
	for (int i = 0; i < 4; i++)
	{
		x = dx[i] + r;
		y = dy[i] + c;

		if (isInside(x, y) && !vis[x][y] && s[x-1][y-1]=='.')
			dfs(x, y);
	}

	//try once more to fit a red
	if (s[r - 1][c - 1] == 'B')
	{
		f = 0;
		for (int i = 0; i < 4; i++)
		{
			x = dx[i] + r;
			y = dy[i] + c;

			if (isInside(x, y) && s[x - 1][y - 1] == 'B')
			{
				f = 1;
				break;
			}
		}

		if (f)
			ans.push_back({ 'D',{ r,c } }), ans.push_back({ 'R',{ r,c } }), s[r-1][c-1]='R';
	}
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int u, v, w;
	
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%s", s[i]);

	memset(vis, 0, sizeof(vis));
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			if (!vis[i][j] && s[i - 1][j - 1] == '.')
				dfs(i, j);
		}
	}

	k = ans.size();
	printf("%d\n", k);
	for (i = 0; i < k; i++)
		printf("%c %d %d\n", ans[i].first, ans[i].second.first, ans[i].second.second);

	return 0;
}
