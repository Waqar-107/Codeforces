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
#include<sstream>
#include<stack>
#include<string>
#include<time.h>
#include<utility>
#include<vector>

#define dbg printf("in\n");
#define nl printf("\n");
#define N 5010
#define inf 100000000000

using namespace std;

int n;
bool vis[N];
char adj[N][N];

void dfs(int s,int p)
{
    vis[s]=1;

    for(int i=0;i<n;i++)
    {
        if(adj[s][i]=='1')
        {
            if(adj[i][p]=='1')
            {
                printf("%d %d %d\n",i+1,p+1,s+1);
                exit(0);
            }

            else if(!vis[i])
                dfs(i,s);
        }
    }

}

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int m,x;

    cin>>n;

    for(i=0;i<n;i++)
    {
        scanf("%s",adj[i]);
    }

    memset(vis,0,sizeof(vis));

    for(i=0;i<n;i++)
    {
        if(!vis[i])
            dfs(i,i);
    }

    cout<<"-1";

    return 0;
}
