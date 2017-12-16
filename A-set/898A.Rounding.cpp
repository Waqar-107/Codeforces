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
#define N 200
#define inf 1000000000
#define pp pair<string,int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    ll i,j,k;
    ll n,m,t;

    scanf("%I64d",&n);

    m=n%10;

    if(m==0)
    {
        printf("%I64d",n);
        return 0;
    }

    //next
    if(m>=5)
    {
        t=n/10;
        printf("%I64d0",t+1);
    }

    else
    {
        t=n/10;
        if(n>9)
            printf("%I64d0",t);
        else
            printf("0");
    }

    return 0;
}
