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
#define N 100010
#define inf 100000000
#define pi 2*acos(0.0)
#define pp pair<int,int>
#define mod 1000000007

using namespace std;

ll getHeight(ll x)
{
	return x&(-x);
}

int main()
{
	//freopen("in2.txt", "r", stdin);
	
	ll i, j, k;
	ll n, m, l;
	ll h, cur, x, y;
	string s;
	
	scanf("%I64d%I64d", &n, &m);

	while (m--)
	{
		scanf("%I64d", &cur);
		cin >> s;

		l = s.length(); 
		for (i = 0; i < l; i++)
		{
			h = getHeight(cur);
			if (s[i] == 'L')
			{
				cur -= h >> 1;
			}

			else if (s[i] == 'R')
			{
				cur += h >> 1;
			}

			else if (s[i] == 'U')
			{
				x = cur + h;
				if (x % (h << 2) == 0)
					cur -= h;

				else if (x <= n)
					cur += h;
			}
		}

		printf("%I64d\n", cur);
	}

	return 0;
}
