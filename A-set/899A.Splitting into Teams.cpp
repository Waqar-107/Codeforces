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

    int i,j=0,k=0;
    int n,m,t;
    int x=0,y=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);

        if(t==1)
            x++;
        else
            y++;
    }

    //1st approach
    //use 2
    if(y>x)
        j=x;
    else
    {
        j+=y;
        j+=(x-y)/3;
    }

    //2nd approach
    k=(x/3);
    x-=(x/3*3);
    if(y>x)
        k+=x;
    else
    {
        k+=y;
        k+=(x-y)/3;
    }

    //
    //cout<<j<<" "<<k;nl
    printf("%d",max(j,k));

    return 0;
}
