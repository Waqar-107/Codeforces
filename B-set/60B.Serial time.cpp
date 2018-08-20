#define _CRT_SECURE_NO_WARNINGS

/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cctype>
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
#define N 15
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int n, m, z;
bool vis[N][N][N];
char adj[N][N][N];

int dx[] = { 1,-1,0,0,0,0 };
int dy[] = { 0,0,1,-1,0,0 };
int dz[] = { 0,0,0,0,1,-1 };

void dfs(int l, int x, int y)
{
	//cout << l << " " << x << " " << y;nl
	if (adj[l][x][y] == '#') return;

	vis[l][x][y] = 1;
	for (int i = 0; i < 6; i++)
	{
		int c = l + dz[i];
		int a = x + dx[i];
		int b = y + dy[i];
		
		//cout << c << " " << a << " " << b << " " << vis[c][a][b];nl
		if (a > 0 && b > 0 && c > 0 && c <= z && a <= n && b <= m && !vis[c][a][b])
			dfs(c, a, b);
	}
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int x, y;
	char ch;

	cin >> z >> n >> m;
	for (i = 1; i <= z; i++)
	{
		for (j = 1; j <= n; j++)
		{
			for (k = 1; k <= m; k++)
				cin >> ch, adj[i][j][k] = ch;
		}
	}

	cin >> x >> y;
	memset(vis, 0, sizeof(vis));
	
	dfs(1, x, y);

	int ans = 0;
	for (i = 1; i <= z; i++)
	{
		for (j = 1; j <= n; j++)
		{
			for (k = 1; k <= m; k++)
			{
				if (vis[i][j][k]) ans++;
			}
		}
	}

	cout << ans << endl;
	return 0;
}
