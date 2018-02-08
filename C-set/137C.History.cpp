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

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int a, b;

	scanf("%d", &n);

	pp *ar = new pp[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d%d", &a, &b);
		ar[i] = { a,b };
	}

	sort(ar, ar + n);

	m = ar[0].second;
	int cnt = 0;

	for (i = 1; i < n; i++)
	{
		if (ar[i].second < m)
			cnt++;
		else
			m = ar[i].second;
	}

	printf("%d\n", cnt);

	return 0;
}
