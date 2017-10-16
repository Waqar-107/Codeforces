/***from dust i have come, dust i will be***/

#include<stdio.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 10000000

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n,m;
	int a, b, c;

	scanf("%d",&n);
	scanf("%d%d%d", &a, &b, &c);

	int p[3][3];

	for (i = 0; i < 3; i++)
		p[i][i] = inf;

	p[0][1] = a;
	p[0][2] = b;

	p[1][0] = a;
	p[1][2] = c;

	p[2][0] = b;
	p[2][1] = c;

	int cur = 0;
	int cnt = 0;

	n--;
	while (n--)
	{
		j = -1, m = inf;
		for (i = 0; i < 3; i++)
		{
			if (m > p[cur][i])
				j = i, m = p[cur][i];
		}

		cnt += p[cur][j];
		cur = j;
	}

	printf("%d", cnt);
	
	return 0;
}
