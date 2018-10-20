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

#define dbg printf("in\n");
#define nl printf("\n");
#define N 200100
#define inf 1e18

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int a[N];

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int x, y;
	ll cnt = 0;
	
	sff(n, k);
	for (i = 1; i <= n; i++)
		sf(a[i]);

	a[0] = 0;
	for (i = 1; i <= n; i++)
	{
	
		//required bag
		x = a[i - 1] / k + (a[i - 1] % k == 0 ? 0 : 1);
		cnt += x;

		//empty space for today
		y = x*k - a[i - 1];
		a[i] -= y;

		a[i] = max(a[i], 0);
	}

	x = a[n] / k + (a[n] % k == 0 ? 0 : 1);
	cnt += x;

	pfl(cnt);

	return 0;
}
