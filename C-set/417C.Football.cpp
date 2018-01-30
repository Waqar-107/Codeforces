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
#include<sstream>
#include<string>
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 1005
#define inf 100000
#define pp pair<int,int>

using namespace std;

int a[N][N];
int main()
{
	//freopen("in.txt", "r", stdin);

	int i, j, k;
	int n,m;
	vector<pp> v;

	scanf("%d%d",&n,&k);

	memset(a,0,sizeof(a));
	for(i=1;i<=n;i++)
    {
        m=0;
        for(j=1;j<=n;j++)
        {
            if(i!=j && !a[i][j] && !a[j][i])
            {
                a[i][j]=1;a[j][i]=2;
                m++;
                v.push_back({i,j});
            }

            if(m==k)
                break;
        }

        if(m<k)
        {
            printf("-1\n");
            return 0;
        }
    }

    printf("%d\n",v.size());
    for(i=0;i<v.size();i++)
    {
       printf("%d %d\n",v[i].first,v[i].second);
    }

	return 0;
}
