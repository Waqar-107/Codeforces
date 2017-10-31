/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<functional>
#include<iostream>
#include<map>
#include<queue>
#include<set>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 1000000000
#define pp pair<int,int>
#define N 102

using namespace std;

char s[N][N];

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, t;
	int x, y;
	char ch;

	cin >> n >> m >> ch;

	for (i = 0; i <= N; i++)
	{
		for (j = 0; j <= N; j++)
			s[i][j] = '.';
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			cin >> s[i][j];
	}

	set<char> ss;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			if (s[i][j] == ch)
			{
				ss.insert(s[i + 1][j]);
				ss.insert(s[i - 1][j]);
				ss.insert(s[i][j + 1]);
				ss.insert(s[i][j - 1]);
			}
		}
	}

	ss.erase('.');
	ss.erase(ch);

	cout << ss.size() << endl;

	return 0;
}
