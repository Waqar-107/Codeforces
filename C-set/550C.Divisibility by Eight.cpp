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
#define N 200100
#define inf 100000000

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
#define pp pair<ll,ll>

using namespace std;

ll rem[N], arr[N];
int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	string s;

	cin >> s;

	s = "00" + s;

	n = s.length();
	for (i = 0; i < n - 2; i++)
	{
		m = 100 * (s[i] - '0');
		for (j = i + 1; j < n - 1; j++)
		{
			m += 10 * (s[j] - '0');
			
			for (k = j + 1; k < n; k++)
			{
				m += (s[k] - '0');

				if (m % 8 == 0) {
					pfs("YES\n");
					pf(m); return 0;
				}

				m -= (s[k] - '0');
			}

			m -= 10 * (s[j] - '0');
		}
	}

	pfs("NO\n");

	return 0;
}
