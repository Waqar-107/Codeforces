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
#define N 100005
#define inf 10000000
#define pp pair<int,int>

using namespace std;

int main()
{
	ll i, j, k;
	ll n, m;

	cin >> n;

	ll *a = new ll[n];
	for (i = 0; i < n; i++)
		cin >> a[i];

	ll *r = new ll[n];
	ll *l = new ll[n];

	//how many -ve's in the right of an element
	r[n - 1] = 0;
	for (i = n - 2; i >= 0; i--)
	{
		if (a[i + 1] <= 0)
			r[i] = r[i + 1] + 1;

		else
			r[i] = r[i + 1];
	}

	//how many +ve's in the left of an element
	l[0] = 0;
	for (i = 1; i < n; i++)
	{
		if (a[i - 1] >= 0)
			l[i] = l[i - 1] + 1;

		else
			l[i] = l[i - 1];
	}

	j = r[0]; k = l[n - 1];
	if (a[0] >= 0)
		j++;

	if (a[n - 1] <= 0)
		k++;

	m = min(j,k);
	for (i = 1; i < n - 1; i++)
	{
		if (a[i] != 0)
			m = min(m, r[i] + l[i]);
		else
			m = min(m, r[i] + 1 + l[i]);
	}

	cout << m << endl;
	return 0;
}
