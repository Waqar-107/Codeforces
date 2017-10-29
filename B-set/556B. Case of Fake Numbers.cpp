#define _CRT_SECURE_NO_WARNINGS

/***from dust i have come, dust i will be***/

#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<sstream>
#include<utility>
#include<map>
#include<cmath>
#include<queue>
#include<algorithm>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 1000000000
#define N 100020

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;

	cin >> n;

	int *a = new int[n];
	for (i = 0; i < n; i++)
		cin >> a[i];


	for (i = 0; i < n; i++)
	{
		//cc
		if (i % 2)
		{
			if (i <= a[i])
				k = (a[i] - i);

			else
				k = (a[i] + n - i);
		}

		else
		{
			if (a[i] <= i)
				k = (i-a[i]);

			else
				k = (i + n - a[i]);
		}

		a[i] = k;
	}

	for (i = 1; i < n; i++)
	{
		if (a[i] != a[i - 1])
		{
			cout << "No" << endl;
			return 0;
		}
	}
	
	cout << "Yes" << endl;

	return 0;
}
