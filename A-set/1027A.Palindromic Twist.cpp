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
#define N 100100
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

bool solve(string s)
{
	int i, j, k;
	int n, m;

	char ac1, ac2;
	char bc1, bc2;

	i = 0;
	j = s.length() - 1;

	while (i < j)
	{
		if (s[i] == s[j]) {
			i++; j--;
			continue;
		}

		if (s[i] == 'a')
			ac1 = ac2 = 'b';
		else if (s[i] == 'z')
			ac1 = ac2 = 'y';
		else
			ac1 = s[i] - 1, ac2 = s[i] + 1;

		if (s[j] == 'a')
			bc1 = bc2 = 'b';
		else if (s[j] == 'z')
			bc1 = bc2 = 'y';
		else
			bc1 = s[j] - 1, bc2 = s[j] + 1;

		if (ac1 == bc1 || ac1 == bc2 || ac2 == bc1 || ac2 == bc2) {
			i++; j--;
			continue;
		}

		return false;
	}

	return true;
}

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, t;
	string s;
	
	sf(t);
	while (t--)
	{
		sf(n);
		cin >> s;

		if (solve(s))
			pfs("YES\n");
		else
			pfs("NO\n");
	}

	return 0;
}
