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
#define N 100
#define inf 100000

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n,m,x;

    scanf("%d%d",&n,&m);

    int a[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            scanf("%d",&a[i][j]);
    }

    int cnt=0;
    int left[n][m],right[n][m];
    int up[n][m],down[n][m];

    memset(left,0,sizeof(left));
    memset(right,0,sizeof(right));
    memset(up,0,sizeof(up));
    memset(down,0,sizeof(down));

    //up-down
    for(i=0; i<m; i++)
    {
        for(j=1; j<n; j++)
            up[j][i]=up[j-1][i]+a[j-1][i];

        for(j=n-2; j>=0; j--)
            down[j][i]=down[j+1][i]+a[j+1][i];
    }

    //left-right
    for(i=0; i<n; i++)
    {
        for(j=1; j<m; j++)
            left[i][j]=left[i][j-1]+a[i][j-1];

        for(j=m-2; j>=0; j--)
            right[i][j]=right[i][j+1]+a[i][j+1];
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(!a[i][j])
            {
                if(left[i][j])
                    cnt++;

                if(right[i][j])
                    cnt++;

                if(up[i][j])
                    cnt++;

                if(down[i][j])
                    cnt++;
            }
        }
    }

    printf("%d",cnt);

    return 0;
}
