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
#define nl printf("\n");
#define N 215
#define inf 100000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

struct exam
{
	int s, d, c;
	exam() {}
	exam(int s, int d, int c) {
		this->s = s;
		this->d = d;
		this->c = c;
	}
};

int ans[N], exmno[N];

bool cmp(exam a, exam b)
{
	return a.d < b.d;
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int s, d, c;

	sff(n, m);
	vector<exam> vec;
	fill(ans, ans + N, -1);

	for (i = 1; i <= m; i++)
	{
		sff(s, d); sf(c);
		vec.pb(exam(s, d, c));

		ans[d] = m + 1;
		exmno[d] = i;
	}

	sort(vec.begin(), vec.end(), cmp);

	for (i = 0; i < m; i++)
	{
		//start preparing after the publication
		s = vec[i].s; d = vec[i].d; c = vec[i].c;
		
		for (j = s; j < d; j++)
		{
			if (c <= 0) break;
			if (ans[j] == -1)
				c--, ans[j] = exmno[d];
		}

		if (c > 0) { pfs("-1\n"); return 0; }
	}

	for (i = 1; i <= n; i++) {
		if (ans[i] == -1)
			ans[i] = 0;

		pf(ans[i]);
	}

	return 0;
}
