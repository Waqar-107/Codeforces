/***from dust i have come, dust i will be***/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long int ll;

int main()
{
	int i, j, k;
	int n, m, r;
	int x, y, x2, y2;

	scanf("%d%d%d%d%d",&r, &x, &y, &x2, &y2);

	double d = sqrt(pow(x - x2, 2) + pow(y - y2, 2));
	double a = d / (2 * r);
	k = ceil(a);
	
	printf("%d",k);

	return 0;
}
