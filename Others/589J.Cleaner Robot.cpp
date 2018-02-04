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
#define N 15
#define inf 100000
#define pp pair<int,int>

using namespace std;

char s[N][N];
bool vis[N][N];

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int x, y, z;

	int dx[] = { -1,1,0,0 };
	int dy[] = { 0,0,-1,1 };
	
	cin >> n >> m;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			cin >> s[i][j];

			if (s[i][j] != '.' && s[i][j] != '*')
				x = i, y = j;
		}
	}

	if (s[x][y] == 'U')
		z = 0;
	else if (s[x][y] == 'D')
		z = 1;
	else if (s[x][y] == 'L')
		z = 2;
	else
		z = 3;

	s[x][y] = '.';
	vis[x][y] = 1;

	k = 1000;
	while (k--)
	{
		int xx = x + dx[z];
		int yy = y + dy[z];
		
		//if possible move
		if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && s[xx][yy] == '.')
			vis[x][y] = 1, x = xx, y = yy;

		//rotate
		else
		{
			if (z == 0)
				z = 3;
			else if (z == 1)
				z = 2;
			else if (z == 2)
				z = 0;
			else
				z = 1;
		}
	}

	int cnt = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			if (vis[i][j])
				cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
