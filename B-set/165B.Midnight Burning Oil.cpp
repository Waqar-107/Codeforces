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
#define inf 100000000000

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	ll i, j, k;
	ll n, m, x;
	ll high, low, mid, ans, cnt;

	scanf("%I64d%I64d", &n, &k);

	high = n; low = 1; ans = inf;
	while (low <= high)
	{
		mid = (high + low) / 2;

		cnt = mid; m = k;
		while (1)
		{
			x = mid / m; m *= k;
			cnt += x;

			if (!x)
				break;
		}
		
		//cout << cnt << " "<<mid<<endl;
		if (cnt == n) {
			ans = mid;
			break;
		}

		if (cnt > n)
			ans = min(ans, mid), high = mid - 1;
		else
			low = mid + 1;
	}

	printf("%I64d\n", ans);
	return 0;
}

