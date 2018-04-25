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

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150
#define inf 1000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb(n) push_back(n)

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    n=5;
    int a[20][20];
    memset(a,0,sizeof(a));

    int b[]={1,2,3,4,5};
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            sf(a[i][j]);
    }

    ll mx=0,cnt;
    do{

        k=1;cnt=0;
        for(i=1;i<n;i++)
        {
            for(j=k;j<=n;j+=2)
                cnt+=(a[b[j-1]][b[j]]+a[b[j]][b[j-1]]);

            k++;
        }

        mx=max(cnt,mx);

    }while(next_permutation(b,b+n));

    pf(mx);

    return 0;
}
