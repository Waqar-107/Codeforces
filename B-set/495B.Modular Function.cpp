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

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int a, b;

	cin >> a >> b;

	if (a < b)
		pfs("0\n");

	else if (a == b)
		pfs("infinity\n");

	else
	{
		//a-b is an ans
		//divisors of (a-b) which are greater than b will also be an ans
		int sq = sqrt((a - b)*1.0);
		int x = a - b, cnt = 0;
	
		for (i = 1; i <= sq; i++)
		{
			if (x%i == 0)
			{
				j = i; k = x / i;
				//cout << j << " " << k << endl;
				if (j == k && j > b)
					cnt++;

				else if (j != k)
				{
					if (j > b)cnt++;
					if (k > b)cnt++;
				}
					
			}
		}

		pf(cnt);
	}

	return 0;
}
