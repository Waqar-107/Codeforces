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
#define N 1000010
#define inf 1000000

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	ll i, j, k;
	ll n, m, p;
	ll q, x, ans, type;

	scanf("%I64d%I64d", &n, &k);

	ll mx = 0; ans = 0; type = 0;
	for (i = 0; i < k; i++)
	{
		scanf("%I64d", &p);

		if (p > n)
			continue;

		else
		{
			q = n / p;
			if (q*p > mx)
			{
				mx = q*p;
				ans = q;
				type = i + 1;
			}

			else if (q*p == mx)
			{
				if (q < ans)
				{
					ans = q;
					type = i + 1;
				}
			}
		}
	}

	if (!ans || !type || !mx)
		printf("1 0\n");

	else
		printf("%I64d %I64d\n",type, ans);

	return 0;
}
