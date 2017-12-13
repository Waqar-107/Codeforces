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

	scanf("%d",&n);

    ll a[n],d[n];
    bool vis[n];
    memset(vis,1,sizeof(vis));

    for(i=0;i<n;i++)
        scanf("%I64d",&a[i]);

    sort(a,a+n);

    for(i=0;i<n;i++)
        d[i]=a[i];

    ll cnt=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<d[j])
            {
                vis[i]=0;
                d[j]=a[i];
                break;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        if(vis[i])
            cnt++;
    }

    cout<<cnt;

	return 0;
}
