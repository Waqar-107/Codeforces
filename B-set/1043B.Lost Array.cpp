

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
#define N 200138
#define inf 1e18

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

bool vis[1010];
int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, t;
	
	sf(n);
	vector<int> vec(n + 1), a(n + 1);

	a[0] = 0;
	for (i = 1; i <= n; i++)
		sf(a[i]);

	vec[0] = a[0];
	for (i = 1; i <= n; i++)
		vec[i] = a[i] - a[i - 1];

	set<int> ans; ans.insert(n);
	
	//a 'k' is valid if chunk of k repeats
	for (k = n - 1; k >= 1; k--)
	{
		memset(vis, 0, sizeof(vis));
		bool f = true;

		for (i = 1; i <= n; i++)
		{
			if (!vis[i])
			{
				vis[i] = 1;
				for (j = i + k; j <= n; j += k)
				{
					if (vec[i] != vec[j]) { f = false; break; }
					vis[j] = 1;
				}
			}
		}

		if (f)
			ans.insert(k);
	}

	pf(ans.size()); nl;
	for (int e : ans)
		pf(e), pfs(" ");

	return 0;
}
