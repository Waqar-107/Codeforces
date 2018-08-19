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
#define N 2100
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
#define pp pair<int,int>

using namespace std;

int adj[N][N];
int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	string s;
	
	int mp[26];
	memset(mp, 0, sizeof(mp));

	sf(n);
	cin >> s;

	if (n == 1) {
		pfs("Yes\n");
		return 0;
	}

	for (i = 0; i < n; i++)
		mp[s[i] - 'a']++;
	
	bool f1=0 , f2 = 0;
	for (i = 0; i < 26; i++)
	{
		if (mp[i] == 1)
			f1 = 1;

		else if (mp[i] > 1)
			f2 = 1;
	}

	if (f1) {
		if (f2)
			pfs("Yes\n");
		else
			pfs("No\n");
	}

	else
		pfs("Yes\n");

	return 0;
}
