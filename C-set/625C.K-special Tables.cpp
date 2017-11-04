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

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 10000000

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	
	scanf("%d%d", &n, &k);

	int **a = new int*[n];
	for (i = 0; i < n; i++)
		a[i] = new int[n];

	//fill the kth in first row
	m = n*n - n + k;
	a[0][k - 1] = m;

	//fill the kth cells of rest of the row
	for (i = 1; i < n; i++)
		a[i][k - 1] = a[i - 1][k - 1] - (n - k + 1);

	for (i = 0; i < n; i++)
	{
		m = a[i][k - 1]+1;
		for (j = k; j < n; j++)
			a[i][j] = m, m++;
	}

	m = 1;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < k - 1; j++)
			a[i][j] = m, m++;
	}

	int sum = 0;
	for (i = 0; i < n; i++)
		sum += a[i][k - 1];

	cout << sum << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}
