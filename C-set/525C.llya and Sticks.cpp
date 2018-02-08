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
#define N 310

#define sf(n) scanf("%d", &n)

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	ll a, b, c, d, x;

	sf(n);

	int *arr = new int[n];
	for (i = 0; i < n; i++)
		sf(arr[i]);

	sort(arr, arr + n, greater<int>());

	if (n < 4)
	{
		printf("0");
		return 0;
	}

	ll ans = 0; x = 0;
	for (i = 0; i < n; i += 2)
	{
		a = arr[i]; b = arr[i + 1];

		if (x)
		{
			if (abs(a - b) <= 1)
			{
				ans += (x*min(a, b));
				x = 0;
			}

			else
				i -= 1;
		}

		else
		{
			if (abs(a - b) <= 1)
				x = min(a, b);
			else
				i -= 1;
		}
	}

	cout << ans << endl;

	return 0;
}

/*
6
5 5 3 1 1 1

o/p- 5

5
6 4 4 3 3

o/p- 12
*/
