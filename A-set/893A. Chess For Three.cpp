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

int main()
{
	//freopen("in2.txt", "r", stdin);
	
	int i, j, k;
	int n, m, l;
	int a, b, c;

	scanf("%d", &n);

	a = 1, b = 2, c = 3;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);

		if (m == c)
		{
			printf("NO\n");
			return 0;
		}

		//else m is the winner
		if (a == m)
			swap(b, c);
		else
			swap(a, c);
	}

	printf("Yes\n");

	return 0;
}
