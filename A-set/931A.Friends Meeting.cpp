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
#define pp pair<int,int>

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int a, b;

	cin >> a >> b;

	if (a > b)
		swap(a, b);

	m = b - a;
	if (m % 2 == 0)
	{
		m = m / 2;
		cout << (m*(m + 1)) << endl;
	}

	else
	{
		m = a + b;
		k = m / 2;
		
		j = k - a;
		k = b - k;

		cout << ((j*(j + 1))/2 + (k*(k + 1))/2) << endl;
	}
	
	return 0;
}
