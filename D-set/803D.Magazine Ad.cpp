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
	int n, m, line;
	string s, t;

	cin >> k >> t;
	getline(cin, s);

	s = t + s;
	n = s.length();

	vector<int> vec;
	
	m = 0;
	for (i = 0; i < n; i++)
	{
		m++;
		if (s[i] == ' ' || s[i] == '-')
			vec.pb(m), m = 0;
	}

	vec.pb(m);

	int hi = n, lo = 0, ans = n, mid;
	while (lo <= hi)
	{
		mid = (lo + hi) / 2;

		m = 0; n = vec.size(); line = 1;
		for (i = 0; i < n; i++)
		{
			if (vec[i] > mid) {
				line = 10000000;
				break;
			}

			//check if after this we would need a line break
			if (m + vec[i] > mid)
				line++, m = vec[i];
			else
				m += vec[i];
		}
		
		//increase width
		if (line > k)
			lo = mid + 1;

		else
			ans = min(ans, mid), hi = mid - 1;
	}

	pf(ans);

	return 0;
}
