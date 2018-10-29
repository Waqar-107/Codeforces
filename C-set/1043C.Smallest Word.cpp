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
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	string s, t, rev;
	
	cin >> s;
	n = s.length();

	vector<int> ans(n);

	s.pb('b');
	for (i = 0; i < n; i++)
	{
		t.pb(s[i]);

		//abb-aa
		if (s[i + 1] == 'a')
		{
			if (t[0] == 'a')
			{
				ans[i] = 1;
				reverse(t.begin(), t.end());
			}

			else
				ans[i] = 0;
		}

		else
		{
			if (t.back() == 'a')
			{
				ans[i] = 1;
				reverse(t.begin(), t.end());
			}

			else
				ans[i] = 0;
		}

		//cout << t << endl;
	}

	for (i = 0; i < n; i++)
		cout << ans[i] << " ";
	nl;

	return 0;
}
