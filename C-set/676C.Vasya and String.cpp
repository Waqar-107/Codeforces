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

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;

	string s;

	sff(n, k);
	cin >> s;

	j = 0;
	int a = 0, b = 0, ans = 0;

	for (i = 0; i < n; i++)
	{
		if (s[i] == 'a')
			a++;
		else
			b++;

		//from j to i, j-i segment
		if (min(a, b) <= k)
			ans = max(ans, a + b);

		else
		{
			if (s[j] == 'a')
				a--;
			else
				b--;

			j++;	//we increase the pointer forward
		}
	}

	pf(ans);

	return 0;
}
