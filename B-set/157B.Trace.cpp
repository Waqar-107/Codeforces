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
#define N 100010
#define inf 10000000
#define pp pair<int,int>
#define pi 3.1415926536

using namespace std;

float area(int r)
{
	return pi*r*r;
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;

	scanf("%d", &n);

	float ans = 0;
	int *r = new int[n];

	for (i = 0; i < n; i++)
		scanf("%d", &r[i]);

	sort(r, r + n,greater<int>());

	for (i = 0; i < n-1; i++)
	{
		if (i % 2 == 0)
		{
			ans += (area(r[i]) - area(r[i + 1]));
		}
	}

	if (n % 2)
		ans += area(r[n - 1]);

	printf("%.10f\n", ans);

	return 0;
}
