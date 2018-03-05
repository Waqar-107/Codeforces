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
#define N 100010
#define pp pair<int,int>

using namespace std;

bool done[2 * N];
int cnt[2 * N], a[2 * N];

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	
	scanf("%d", &n);

	memset(cnt, 0, sizeof(cnt));
	memset(done, 0, sizeof(done));

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		cnt[a[i]]++;
	}

	queue<int> q;
	for (i = 1; i <= n; i++)
	{
		if (!cnt[i])
			q.push(i);
	}

	printf("%d\n", q.size());
	for (i = 1; i <= n; i++)
	{
		if (cnt[a[i]] == 1)
			continue;

		if (done[a[i]])
			a[i] = q.front(), q.pop();

		else
		{
			//check 
			if (q.front() < a[i])
			{
				cnt[a[i]]--;
				a[i] = q.front();
				q.pop();
			}

			else
				done[a[i]] = 1;
		}
	}

	for (i = 1; i <= n; i++)
		printf("%d ", a[i]);

	return 0;
}
