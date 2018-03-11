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
#define N 510
#define inf 1000000

using namespace std;

char s[N][N];
int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, d;

    cin>>n>>m;

    for(i=1; i<N; i++)
    {
        for(j=1; j<N; j++)
            s[i][j]='.';
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            cin>>s[i][j];
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(s[i][j]=='S' && (s[i][j+1]=='W' || s[i][j-1]=='W' || s[i+1][j]=='W' || s[i-1][j]=='W'))
            {
                //cout<<i<<" "<<j;nl
                printf("No\n");
                return 0;
            }

            if(s[i][j]=='S')
            {
                if(s[i][j-1]=='.')
                    s[i][j-1]='D';
                if(s[i][j+1]=='.')
                    s[i][j+1]='D';
                if(s[i-1][j]=='.')
                    s[i-1][j]='D';
                if(s[i+1][j]=='.')
                    s[i+1][j]='D';
            }
        }
    }

    cout<<"Yes\n";
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            cout<<s[i][j];
        nl
    }

    return 0;
}
