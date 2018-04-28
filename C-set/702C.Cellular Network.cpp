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

ll a[N], b[N], dist[N];
int main()
{
	//freopen("in2.txt", "r", stdin);

	ll i, j, k;
	ll n, m;
	ll high, low, mid;

	scanf("%I64d%I64d", &n, &m);

	set<ll> sb;
	set<ll>::iterator itr;

	for (i = 0; i < n; i++)
		scanf("%I64d", &a[i]);
	for (i = 0; i < m; i++)
		scanf("%I64d", &b[i]), sb.insert(b[i]);

	//towers that are in right side of a house
	//there may not be any tower at all
	for (i = 0; i < n; i++)
	{
		itr = sb.lower_bound(a[i]);

		//no tower in right side
		if (itr == sb.end())
			dist[i] = inf;
		else
			dist[i] = abs(*itr - a[i]);
	}

	//now we search in the left
	//we use binary search here
	for (i = 0; i < n; i++)
	{
		k = inf * 2;
		high = m - 1, low = 0;

		while (low <= high)
		{
			mid = (low + high) / 2;

			if (b[mid] == a[i]) {
				k = 0;
				break;
			}
		
			if (b[mid] > a[i])
				high = mid - 1;
			else
				k = min(k, abs(b[mid] - a[i])), low = mid + 1;
		}

		dist[i] = min(k, dist[i]);
	}

	m = 0;
	for (i = 0; i < n; i++)
		m = max(m, dist[i]);

	printf("%I64d\n", m);

	return 0;
}

