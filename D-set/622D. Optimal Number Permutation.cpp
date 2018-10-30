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
#define N 200138
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

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;

	sf(n);
	vector<int> ans(2 * n + 1, 0);

	if (n % 2 == 0)
	{
		k = 1;
		for (i = 1; i < n; i += 2)
		{
			ans[k] = i;
			ans[n - i + k] = i;
			k++;
		}

		k = n + 1;
		for (i = 2; i < n; i += 2)
		{
			ans[k] = i;
			ans[n - i + k] = i;
			k++;
		}
	}

	else
	{
		k = 1;
		for (i = 2; i < n; i += 2)
		{
			ans[k] = i;
			ans[n - i + k] = i;
			k++;
		}

		k = n;
		for (i = 1; i < n; i += 2)
		{
			ans[k] = i;
			ans[n - i + k] = i;
			k++;
		}
	}

	for (i = 1; i <= 2 * n; i++)
	{
		if (!ans[i])
			ans[i] = n;
	}

	for (i = 1; i <= 2 * n; i++) 
		pf(ans[i]), pfs(" ");

	return 0;
}
