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
#define N 5100
#define inf 100000000000
#define pp pair<int,int>

using namespace std;

int l[N], r[N], a[N];

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	string s, t;

	cin >> s;

	n = s.length();
	memset(l, 0, sizeof(l));
	memset(r, 0, sizeof(r));
	memset(a, 0, sizeof(a));

	t = s; t.push_back('#');
	for (i = 1; i <= n; i++)
		t[i] = s[i - 1];

	t[0] = '#';
	for (i = 1; i <= n; i++)
	{
		if (t[i] == 'b')
			l[i + 1] = l[i] + 1;
		else
			l[i + 1] = l[i];

		if (t[i] == 'a')
			a[i] = a[i - 1] + 1;
		else
			a[i] = a[i - 1];
	}

	for (i = n; i >= 1; i--)
	{
		if (t[i] == 'b')
			r[i - 1] = r[i] + 1;
		else
			r[i - 1] = r[i];
	}

	int mx = 0;
	int x, y;
	for (i = 1; i <= n; i++)
	{
		//2nd str starts from i, ends in j
		for (j = i; j <= n; j++)
		{
			//no. of b's in 1st and 3rd str
			x = l[i] + r[j];

			//no. of a's in range i-j
			y = a[j] - a[i];
			mx = max(mx, n - x - y);
		}
	}

	cout << mx << endl;

	return 0;
}
