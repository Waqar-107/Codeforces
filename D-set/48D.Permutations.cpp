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

#define dbg printf("in\n")
#define nl printf("\n");
#define N 100010
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb push_back

using namespace std;

int mp[N], ans[N];
bool temp[N];
set<int> perm[N];

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int a, b;
	int n, m, mx;

	memset(mp, 0, sizeof(mp));
	memset(temp, 0, sizeof(temp));

	sf(n); mx = 0;
	for (i = 0; i < n; i++)
	{
		sf(m); mp[m]++;
		ans[i] = mp[m];
		
		perm[mp[m]].insert(m);
		mx = max(mx, mp[m]);
	}

	//check the permutations
	for (i = 1; i <= mx; i++)
	{
		auto itr = perm[i].begin();

		a = *itr; itr++;
		if (perm[i].size() == 1 && a != 1)
		{
			pf(-1);
			return 0;
		}
		
		while (itr!=perm[i].end())
		{
			b = *itr; itr++; 
			if (b - a != 1)
			{
				pf(-1);
				return 0;
			}
			a = b;
		}
	}

	pf(mx); pfs("");
	for (i = 0; i < n; i++)
		pf(ans[i]);

	return 0;
}
