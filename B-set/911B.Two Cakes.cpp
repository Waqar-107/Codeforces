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
#define N 1010
#define inf 10000000
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int a,b;

    scanf("%d%d%d",&n,&a,&b);

    if(a>b)
        swap(a,b);

    m=0;
    for(i=1;i<=n-1;i++)
    {
        j=a/i;
        k=b/(n-i);

        if(j>=1 && k>=1)
            m=max(m,min(j,k));
    }

    printf("%d",m);

    return 0;
}
