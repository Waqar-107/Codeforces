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
#include<unordered_set>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 1010
#define inf 1e18

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int main()
{
	freopen("in.txt", "r", stdin);

	int i,j,k;
	int m,n;
	string str;

	sff(n,m);
	cin>>str;

	int dist[n];
	fill(dist,dist+n,10000);

	dist[0]=0;
	for(i=0;i<n;i++)
	{
        //cout<<i<<" "<<dist[i];nl;
        if(str[i]=='1')
        {
            for(j=0;j<=m;j++)
            {
                if(i+j<n && str[i+j]=='1')
                    dist[i+j]=min(dist[i+j], dist[i]+1);
            }
        }
	}

	if(dist[n-1]==1e4)
        pfs("-1");

    else
        pf(dist[n-1]);

	return 0;
}
