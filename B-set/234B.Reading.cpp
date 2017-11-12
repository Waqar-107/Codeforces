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
#define N 100005
#define inf 10000000
#define pp pair<int,int>

using namespace std;

int main()
{
	int i, j, k;
	int n, m;

	scanf("%d%d", &n, &k);

	pp *a = new pp[n];

	for (i = 0; i < n; i++)
	{
		scanf("%d", &j);
		a[i] = { j,i };
	}

	sort(a, a + n, greater<pp>());

	printf("%d\n", a[k - 1].first);
	for (i = 0; i < k; i++)
		printf("%d ", a[i].second+1);

	return 0;
}
