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
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 200010
#define inf 1000000000
#define pp pair<string,int>

using namespace std;

int main()
{
	//freopen("in.txt", "r", stdin);

	int i,j,k;
	int n,m,t;
	int x,y;

	scanf("%d",&n);

	for(i=0;i<n;i++)
    {
        scanf("%d",&m);

        if(m%3==0 || m%7==0)
            printf("YES\n");

        else
        {
            bool f=0;
            for(j=0;j<40;j++)
            {
                x=m-3*j;
                if(x>0 && x%7==0)
                {
                    printf("YES\n");f=1;
                    break;
                }
            }

            if(!f)
                printf("NO\n");
        }
    }

	return 0;
}
