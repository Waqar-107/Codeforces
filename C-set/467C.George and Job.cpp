#define _CRT_SECURE_NO_WARNINGS

/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<list>
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
#define nl printf("\n")
#define N 5010
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

struct range
{
	int l, r;
	ll sum;
	range() {}
	range(int l, int r,ll sum) {
		this->l = l;
		this->r = r;
		this->sum = sum;
	}
};

int a[N];
ll dp[N][N];
vector<range> vec;

//ending in idx and size is k
ll solve(int idx,int k)
{
	if (k <= 0 || idx < 0) return 0;

	if (dp[idx][k] != -1)
		return dp[idx][k];

	//we can maximize either taking it or leaving it
	ll t1, t2;

	//not taking it
	t1 = solve(idx - 1, k);

	//taking it
	t2 = vec[idx].sum;
	for (int i = idx - 1; i >= 0; i--) 
	{
		if (vec[idx].l > vec[i].r) 
		{
			t2 += solve(i, k - 1);
			break;
		}
	}

	dp[idx][k] = max(t1, t2);

	return dp[idx][k];
}

int main()
{
	freopen("in2.txt", "r", stdin);
	
	int i, j, k;
	int n, m;
	int l, r;

	sff(n, m); sf(k);
	for (i = 0; i < n; i++)
		sf(a[i]);

	ll sum;
	for (i = 0; i < n; i++)
	{
		l = i; r = l + m - 1;
		if (r >= n)break;
		
		sum = 0;
		for (j = l; j <= r; j++)
			sum += a[j];

		vec.pb(range(l, r, sum));
	}

	n = vec.size();
	memset(dp, -1, sizeof(dp));

	pfl(solve(n - 1, k));

	return 0;
}
