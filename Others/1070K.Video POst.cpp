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
#define N 101010
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

int a[N];

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	ll cnt = 0, x;
	
	sff(n, k);
	for (i = 0; i < n; i++)
		sf(a[i]), cnt+=a[i];

	if (cnt%k != 0)
	{
		pfs("No\n");
		return 0;
	}

	cnt /= k;

	x = 0;
	vector<int> vec;


	k = 0;
	for (i = 0; i < n; i++)
	{
		if (x == cnt)
		{
			vec.pb(i);
			x = 0;
		}

		x += a[i];
	}

	if (x == cnt)
		vec.pb(n);

	if (!vec.size()) {
		pfs("No\n"); return 0;
	}
	
	pfs("Yes\n");
	
	pf(vec[0]); pfs(" ");
	n = vec.size();

	for (i = 1; i < n; i++) {
		pf(vec[i] - vec[i -1]); pfs(" ");
	}

	return 0;
}
