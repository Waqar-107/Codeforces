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
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	ll t;

	sf(n); sfl(t);

	vector<int> vec(n);
	for (i = 0; i < n; i++)
		sf(vec[i]);

	ll x, y, sum, ans;

	//money to buy from all the shops in a single loop
	x = 0;
	for (i = 0; i < n; i++)
		x += vec[i];

	ll koybar = t / x;
	t -= koybar*x; ans = n*koybar;

	//now some of the shop will be skipped
	while (true)
	{
		sum = 0; y = t; x = 0;
		for (i = 0; i < n; i++)
		{
			if (y >= vec[i])
				y -= vec[i], sum += vec[i], x++;
		}

		//check how many times this can be repeated

		if (!sum)break;

		koybar = t / sum;
		t -= koybar*sum; ans += koybar*x;
	}

	pfl(ans);

	return 0;
}
