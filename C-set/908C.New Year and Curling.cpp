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
#define inf 10000000000
#define pp pair<char,int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,r;
    int a,b,c;

    scanf("%d%d",&n,&r);

    double x[n],y[n];
    double d1,d2;

    for(i=0; i<n; i++)
        scanf("%lf",&x[i]);

    y[0]=r;
    for(i=1; i<n; i++)
    {
        y[i]=r*1.0;
        for(j=0; j<i; j++)
        {
            if(x[i]!=x[j])
            {
                a=(r+r)*(r+r);
                b=(x[j]-x[i])*(x[j]-x[i]);

                c=a-b;
                d1=sqrt(c)*(1.0)+y[j];
                y[i]=max(y[i],d1);

            }

            else
                y[i]=max(y[i],r+r+y[j]);

        }
    }

    for(i=0; i<n; i++)
      printf("%.10f ",y[i]);

    return 0;
}
