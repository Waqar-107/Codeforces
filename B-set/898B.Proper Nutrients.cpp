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

    ll i,j,k;
    ll n,m,t;
    ll a,b;

    scanf("%I64d%I64d%I64d",&n,&a,&b);

    t=n/a+1;
    for(i=0; i<=t; i++)
    {
        m=i*a;
        if((n-m)%b==0 && n-m>=0)
        {
            printf("YES\n%I64d %I64d",i,(n-m)/b);
            return 0;
        }
    }

    printf("NO");

    return 0;
}
