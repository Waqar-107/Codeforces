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
#include<list>
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
#define nl printf("\n")
#define N 200100
#define inf 1000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

ll sum[N];

int main()
{
	freopen("in2.txt", "r", stdin);
	
	int i, j, k;
	int n, mn, mx, x;
	ll m, y;

	memset(sum, 0, sizeof(sum));
	
	sf(n); sfl(m);
	int *a = new int[n];

	mn = inf; mx = 0;
	for (i = 0; i < n; i++)
	{
		sf(a[i]);
		sum[a[i]]++;

		mn = min(mn, a[i]);
		mx = max(mx, a[i]);
	}

	for (i = mx - 1; i >= 1; i--)
		sum[i] += sum[i + 1];

	int cnt = 0;
	x = mx; y = 0;
	
  while (x > mn)
	{
		if (sum[x] + y <= m)
			y += sum[x], x--;

		else
			cnt++, y = 0;
	}

	if (y)
		cnt++;

	pf(cnt);

	return 0;
}
