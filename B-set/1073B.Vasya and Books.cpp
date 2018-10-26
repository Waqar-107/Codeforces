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

bool ase[N];
int idx[N];

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int cnt;

	sf(n);

	vector<int> a, b;
	memset(ase, 0, sizeof(ase));

	a.resize(n), b.resize(n);

	for (i = 0; i < n; i++)
		sf(a[i]), ase[a[i]] = true, idx[a[i]] = i;

	for (i = 0; i < n; i++)
		sf(b[i]);

	for (i = 0; i < n; i++)
	{
		if (!ase[b[i]])
			pfs("0 ");

		else
		{
			k = idx[b[i]]; cnt = 0;
			while (k>=0)
			{
				cnt++; ase[a[k]] = false;
				k--;

				if (k>=0 && !ase[a[k]])
					break;
			}

			pf(cnt); pfs(" ");
		}
	}

	return 0;
}
