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
	freopen("in2.txt", "r", stdin);

	ll i, j, k;
	ll n, t;
	ll a, b;
	
	cin >> n;

	ll *x = new ll[n];
	ll *y = new ll[n];

	for (i = 0; i < n; i++)
		cin >> x[i] >> y[i];

	sort(x, x + n);
	sort(y, y + n);

	a = abs(x[0] - x[n - 1]);
	b = abs(y[0] - y[n - 1]);

	k = max(a, b);
	cout << k*k << endl;

	return 0;
}
