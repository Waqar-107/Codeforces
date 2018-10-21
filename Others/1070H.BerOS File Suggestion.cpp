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

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m, len;
	string s, t;

	map<string, int> sub_cnt;
	map<string, string> sub;
	set<string> x;

	sf(n);
	while(n--)
	{
		cin >> s;

		len = s.length();
		for (i = 0; i < len; i++)
		{
			for (j = 1; j <= len; j++)
			{
				if (i + j <= len)
				{
					t = s.substr(i, j);
					x.insert(t);
				}
			}
		}
		
		for (string e : x)
		{
			sub_cnt[e]++;
			sub[e] = s;
		}

		x.clear();
	}

	sf(m);
	while (m--)
	{
		cin >> s;

		k = sub_cnt[s];
		pf(k); pfs(" ");
		if (!k)
			pfs("-\n");

		else
			cout << sub[s] << endl;
	}

	return 0;
}
