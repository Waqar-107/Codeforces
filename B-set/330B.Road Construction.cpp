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

bool in[N];
int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int u, v;

	scanf("%d%d", &n, &m);

	memset(in, 0, sizeof(in));
	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &u, &v);
		in[u] = 1; in[v] = 1;
	}

	u = -1;
	for (i = 1; i <= n; i++)
	{
		if (!in[i])
		{
			u = i;
			break;
		}
	}

	printf("%d\n", n - 1);
	for (i = 1; i <= n; i++)
	{
		if (i != u)
			printf("%d %d\n", u, i);
	}

	return 0;
}
