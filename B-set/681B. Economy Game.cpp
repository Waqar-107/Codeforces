/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 1000000000
#define pp pair<char,char>

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	ll i, j, k;
	ll n;
	ll x, y, z;

	cin >> n;

	x = n / 1234567; x++;
	y = n / 123456; y++;
	
	for (i = 0; i <= x; i++)
	{
		for (j = 0; j <= y; j++)
		{
			z = n - (i * 1234567) - (j * 123456);

			if (z >= 0 && z % 1234 == 0)
			{
				cout << "YES" << endl;
				return 0;
			}
		}
	}

	cout << "NO" << endl;

	return 0;
}
