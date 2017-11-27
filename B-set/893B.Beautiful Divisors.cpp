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
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 10000000

using namespace std;

int main()
{
	//freopen("in2.txt", "r", stdin);

	ll i, j, k;
	ll n, m;
	ll x,y;

	scanf("%I64d", &n);

	if (n % 2==1)
	{
		printf("1\n");
		return 0;
	}

	j=2;k=1;x=1;
	for(i=0;i<=10;i++)
    {
        m=(j-1)*k;
        j*=2;k*=2;

        if(m>0 && n%m==0)
        {
            x=max(x,m);
        }
    }

    printf("%I64d\n",x);

	return 0;
}
