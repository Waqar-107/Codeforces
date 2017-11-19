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
#define N 100010
#define inf 100000000
#define pi 2*acos(0.0)
#define pp pair<string,int>

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, t;
	
	scanf("%d", &n);

	int *a = new int[n];
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int sum = 0;
	int mn=-inf, mp=inf;
	for (i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			sum += a[i];
			if (a[i] % 2)
				mp = min(mp, a[i]);
		}

		else if (a[i] < 0)
		{
			if (a[i] % 2)
				mn = max(mn, a[i]);
		}
	}

	if (sum % 2 == 0)
	{
		mn = abs(mn);
		sum -= min(mn, mp);
	}

	printf("%d\n", sum);
	return 0;
}
