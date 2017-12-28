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
#define pp pair<char,int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,r;
    int a,b;
    int seg[]={6,2,5,5,4,5,6,3,7,6};

    scanf("%d%d",&a,&b);

    ll sum=0;
    for(i=a;i<=b;i++)
    {
        k=i;
        while(k>0)
        {
            r=k%10;k/=10;
            sum+=seg[r];
        }
    }

    printf("%I64d",sum);

    return 0;
}
