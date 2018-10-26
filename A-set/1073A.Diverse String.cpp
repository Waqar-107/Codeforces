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
#define N 1000005
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

void exec() {
	pfs("NO\n");
	exit(0);
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, l;
	string s, t;
	
	sf(n);
	cin >> s;

	if (n == 1)
		exec();

	for (i = 0; i < n - 1; i++)
	{
		if (s[i] != s[i + 1]) {
			pfs("YES\n");
			cout << s[i] << s[i + 1] << endl;
			return 0;
		}
	}

	pfs("NO\n");

	return 0;
}
