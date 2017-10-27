/***from dust i have come, dust i will be***/

#include<iostream>
#include<cstdio>
#include<vector>
#include<utility>
#include<map>
#include<cmath>
#include<queue>
#include<algorithm>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 1000000
#define pp pair<int,int>
#define N 1010

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n,x;
	
	scanf("%d", &n);

	int cnt = 0;
	scanf("%d%d", &j, &k);

	cnt = j;

	for (i = 1; i < n; i++)
	{
		scanf("%d%d", &j, &k);

		if (j > cnt)
			cnt = j;

		else
		{
			while (1)
			{
				j += k;
				if (j > cnt)
				{
					cnt = j; break;
				}
			}
		}
	}

	printf("%d", cnt);

	return 0;
}

