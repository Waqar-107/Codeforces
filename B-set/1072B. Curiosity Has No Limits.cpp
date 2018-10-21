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
#define N 100100
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

int a[N], b[N], ans[N];
vector<int> t[N];

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;

	sf(n);

	for (i = 0; i < n - 1; i++)
		sf(a[i]);

	for (i = 0; i < n - 1; i++)
		sf(b[i]);


	//a[0] and b[0]
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			if ((i | j) == a[0] && (i&j) == b[0])
				t[0].pb(i), t[1].pb(j);
		}
	}
	
	//now t[i] is fixed and you have to take t[i+1] accordingly
	for (i = 1; i < n  - 1; i++)
	{
		for (int e : t[i])
		{
			for (j = 0; j <= 3; j++)
			{
				if ((e | j) == a[i] && (e&j) == b[i])
					t[i + 1].pb(j);
			}
		}
	}

	/*for (i = 0; i < n; i++)
	{
		for (int e : t[i])
			cout << e << " ";
		nl;
	}*/

	if (t[n - 1].size() == 0)
		pfs("NO\n");

	else
	{
		pfs("YES\n");

		ans[n - 1] = t[n - 1][0];

		for (i = n - 2; i >= 0; i--)
		{
			for (int e : t[i])
			{
				if ((e | ans[i + 1]) == a[i] && (e&ans[i + 1]) == b[i])
				{
					ans[i] = e; break;
				}
			}
		}
		
		for (i = 0; i < n; i++)
			pf(ans[i]), pfs(" ");
	}

	return 0;
}
