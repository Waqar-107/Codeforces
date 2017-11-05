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
#define N 1001
#define mod 1000000007

using namespace std;

char s[N][N];
int r[N], c[N];

int main()
{
	//freopen("in2.txt","r",stdin);
	
	int i, j, k;
	int n, m;
	int cnt = 0;

	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> s[i][j];

			if (s[i][j] == '*')
			{
				cnt++;
				r[i]++;
				c[j]++;
			}
		}
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			k = r[i] + c[j];
			if (s[i][j] == '*')
				k--;

			if (cnt == k)
			{
				printf("YES\n%d %d\n", i + 1, j + 1);
				return 0;
			}
		}
	}

	printf("NO\n");

	return 0;
}
