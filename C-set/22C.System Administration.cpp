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
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 1010
#define inf 100000000000
#define pp pair<int,int>

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, v;

	cin >> n >> m >> v;

	int mx = ((n - 1)*(n - 2)) / 2 + 1;

	if (m<(n - 1) || m>(mx))
	{
		cout << "-1" << endl;
		return 0;
	}

	for (i = 1; i <= n; i++)
	{
		if (i != v)
			cout << v << " " << i << endl;
	}

	m -= (n - 1);

	if (v == 1)
		mx = 2;
	else
		mx = 1;

	//connect if not v or mx
	for (i = 1; i < n; i++)
	{
		if (!m)
			break;

		for (j = i+1; j <= n; j++)
		{
			if (i != v && j != v && i!=mx && j!=mx)
			{
				cout << i << " " << j << endl;
				m--;
			}

			if (!m)
				break;
		}
	}
	
	return 0;
}
