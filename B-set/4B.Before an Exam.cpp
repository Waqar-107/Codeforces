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
#define N 50
#define inf 10000000
#define pp pair<int,int>

using namespace std;

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, t;

	cin >> n >> m;

	t = 0; k = m;
	pp *a = new pp[n];
	for (i = 0; i < n; i++)
		cin >> a[i].first >> a[i].second, m -= a[i].first, t+=a[i].second;

	if (m < 0 || t<k)
	{
		cout << "NO\n";
		return 0;
	}

	else if (m == 0)
	{
		cout << "YES\n";
		for (i = 0; i < n; i++)
			cout << a[i].first << " ";

		return 0;
	}

	cout << "YES\n"; //cout << m;nl
	for (i = 0; i < n; i++)
	{
		if (!m)
		{
			cout << a[i].first << " ";
			continue;
		}

		k = a[i].second - a[i].first;
		if (m > k)
			cout << a[i].second << " ", m -= k;

		else
			cout << m + a[i].first << " ", m = 0;

	}

	return 0;
}
