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

#define dbg printf("in\n");
#define nl printf("\n");
#define N 100010

using namespace std;

vector<int> rem[N];
int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	
	/*
	* if (x-y)%m==0 then x%m==y%m
	*/

	cin >> n >> k >> m;
	while (n--)
	{
		cin >> j;
		rem[j%m].push_back(j);
	}

	for (i = 0; i < m; i++)
	{
		if (rem[i].size() >= k)
		{
			cout << "Yes\n";
			for (j = 0; j < k; j++)
				cout << rem[i][j] << " ";

			return 0;
		}
	}

	cout << "No\n";

	return 0;
}
