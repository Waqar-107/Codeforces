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
#define N 1001
#define mod 1000000007

using namespace std;

int main()
{
	int i, j, k;
	int n, m;

	cin >> n;

	int *a = new int[n + 1];
	for (i = 1; i <= n; i++)
		cin >> a[i];

	int l = 1, last = 0; m = 1;
	int mn = a[1], mx = a[1];

	for (i = 2; i <= n; i++)
	{
		if (a[i] != a[i - 1])
		{
			if (mn == mx)
			{
				if (a[i] > mx)
					mx = a[i];
				else
					mn = a[i];

				last = i;
			}

			else
			{
				if (a[i] == mx || a[i] == mn)
				{
					last = i;

					if (i != n)
						continue;
				}

				else
				{
					if (a[i] > mx)
						mn = mx, mx = a[i];
					else
						mx = mn, mn = a[i];
				
					m = max(m, i - l);
					l = last; last = i;
				}
			}
		}

		if (i == n)
		{
			m = max(m, i - l + 1);
		}
	}

	cout << m << endl;

	return 0;
}
