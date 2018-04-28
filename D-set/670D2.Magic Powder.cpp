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
#define N 100010
#define mod 10000007

using namespace std;

ll a[N], b[N];
int main()
{
	freopen("in2.txt", "r", stdin);

	ll i, j, k;
	ll n, m;

	scanf("%I64d%I64d", &n, &k);

	for (i = 0; i < n; i++)
		scanf("%I64d", &a[i]);
	for (i = 0; i < n; i++)
		scanf("%I64d", &b[i]);

	ll high, low, mid, ans;
	high = 2000000005, low = 0, ans = 0;

	ll cnt;
	while (low <= high)
	{
		mid = (low + high) / 2;

		cnt = 0;
		for (i = 0; i < n; i++)
		{
			cnt += max((ll)0, mid*a[i] - b[i]);

			if (cnt > k)
				break;
		}

		if (cnt == k) {
			ans = mid;
			break;
		}

		if (cnt > k)
			high = mid - 1;
		else
			low = mid + 1, ans = max(ans, mid);
	}

	printf("%I64d\n", ans);

	return 0;
}

