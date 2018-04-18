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
#define N 1000010
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb(n) push_back(n)

using namespace std;

int a[N];
int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;

	sff(n, k);
	if (n < 3 * k)
	{
		pf(-1);
		return 0;
	}

	m = 1;
	for (i = 1; i <= k; i++)
		a[m] = i, m++;

	for (i = 1; i <= k; i++)
		a[m] = i, a[m + 1] = i, m += 2;

	while (m<=n)
	{
		a[m] = 1;
		m++;
	}

	for (i = 1; i <= n; i++)
		pf(a[i]);

	return 0;
}
