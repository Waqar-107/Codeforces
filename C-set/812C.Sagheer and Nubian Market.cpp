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
#define pp pair<int,int>
#define inf 10000000

using namespace std;

ll a[N], b[N];
ll price(ll k,ll n)
{
	for (ll i = 1; i <= n; i++)
		b[i-1] = a[i] + (i*k);

	sort(b, b + n);

	ll p = 0;
	for (ll i = 0; i < k; i++)
		p += b[i];

	return p;
}

int main()
{
	freopen("in2.txt", "r", stdin);

	ll i, j, k;
	ll n, m;

	cin >> n >> m;
	for (i = 1; i <= n; i++)
		cin >> a[i];

	
	ll high, low, mid, ans, cost;
	high = n, low = 0, ans = 0, cost = 0;

	while (high>=low)
	{
		mid = (low + high) / 2;

		//price
		k = price(mid, n);
		//cout << k <<" "<<mid<<" "<<a[mid]<< endl;
		if (k == m)
		{
			cout << mid <<" "<<m<< endl;
			return 0;
		}

		if (k > m)
			high = mid - 1;

		else
			low = mid + 1, ans = mid, cost=k;
	}

	cout << ans << " " << cost << endl;

	return 0;
}
