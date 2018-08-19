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
#define N 150
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

bool b[N], g[N];

void init() {
	memset(b, 0, sizeof(b));
	memset(g, 0, sizeof(g));
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int u, v;

	init();

	sff(n, m);

	sf(k);
	while (k--) {
		sf(v);
		b[v] = 1;
	}

	sf(k);
	while (k--) {
		sf(v);
		g[v] = 1;
	}

	//loop till pattern found
	i = 0;
	while (i<10000)
	{
		u = i%n;
		v = i%m;

		if (b[u] || g[v])
			b[u] = 1, g[v] = 1;

		i++;
	}

	int cnt = 0;
	for (i = 0; i < n; i++)
	{
		if (!b[i])
			cnt++;
	}
	
	for (i = 0; i < m; i++)
	{
		if (!g[i])
			cnt++;
	}

	if (!cnt)
		pfs("YES\n");
	else
		pfs("NO\n");

	return 0;
}
