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

struct env
{
	int w, h, idx;
	env() {}
	env(int w, int h, int idx) {
		this->w = w;
		this->h = h;
		this->idx = idx;
	}
};

bool cmp(env a, env b) {
	if (a.w == b.w)
		return a.h < b.h;

	return a.w < b.w;
}

int w, h;
vector<env> vec;
int dp[N];
int parent[N];

int main()
{
	freopen("in2.txt", "r", stdin);
	
  int i, j, k;
	int n, m;

	sf(n); sff(w, h);

	for (i = 1; i <= n; i++)
	{
		sff(j, k);
		if (j > w && k > h)
			vec.pb(env(j, k, i));
	}

	if (vec.size() == 0) {
		pfs("0\n");
		return 0;
	}

	sort(vec.begin(), vec.end(), cmp);

	n = vec.size();

	//state: if the chain ends in ith envelop
	memset(dp, 0, sizeof(dp));
	memset(parent, -1, sizeof(parent));

	dp[0] = 1;
	for (i = 1; i < n; i++)
	{
		for (j = i - 1; j >= 0; j--)
		{
			//jth could be taken
			if (vec[j].w < vec[i].w && vec[j].h < vec[i].h)
			{
				if (1 + dp[j] > dp[i])
				{
					dp[i] = 1 + dp[j];
					parent[i] = j;
				}
			}
		}

		if (!dp[i])dp[i] = 1;
	}

	int mx = 1; k = 0;
	for (i = 1; i < n; i++)
	{
		if (dp[i] > mx)
			mx = dp[i], k = i;
	}

	//so the chain ends in kth envelop
	pf(mx); pfs("\n");

	vector<int> ans; ans.pb(vec[k].idx);
	while (1)
	{
		k = parent[k];
		if (k == -1)break;

		ans.pb(vec[k].idx);
	}

	reverse(ans.begin(), ans.end());
	for (int e : ans)
		pf(e);

	return 0;
}
