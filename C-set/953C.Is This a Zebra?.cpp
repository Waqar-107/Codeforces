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
#define N 200010
#define inf 100000000000
#define pp pair<int,int>

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, t;
	int x, y;
	
	cin >> n;

	set<int> zero;
	set<int> one;

	int *a = new int[n];
	for (i = 0; i < n; i++)
		cin >> a[i];

	int cnt = 1, st = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] == st)
			cnt++;

		else
		{
			if (st)
				one.insert(cnt);
			else
				zero.insert(cnt);

			st = 1 - st;
			cnt = 1;
		}

		if (i == n - 1)
		{
			if (st)
				one.insert(cnt);
			else
				zero.insert(cnt);
		}
	}

	if (one.size() <= 1 && zero.size() <= 1)
	{
		if (one.size() == 0 || zero.size() == 0)
			cout << "YES" << endl;

		else
		{
			auto itr = one.begin();

			x = *itr;
			itr = zero.begin();
			y = *itr;

			if (x == y)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}

	else
		cout << "NO" << endl;

	return 0;
}
