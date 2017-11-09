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
#define N 200000
#define pp pair<int,int>

using namespace std;

bool cmp(pp a, pp b)
{
	return a.second < b.second;
}

int main()
{
	int i, j, k;
	int n, m;
	int l, r;

	scanf("%d", &n);

	pp *a = new pp[n];

	for (i = 0; i < n; i++)
	{
		scanf("%d%d", &l, &r);
		a[i] = { l,r };
	}

	sort(a, a + n,cmp);

	int cnt = 1;
	r = a[0].second;

	for (i = 1; i < n; i++)
	{
		if (a[i].first > r)
			cnt++, r = a[i].second;
	}

	printf("%d\n", cnt);
	return 0;
}
