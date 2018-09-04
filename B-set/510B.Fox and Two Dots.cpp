/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 55
#define inf 10000000000000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d\n",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int dx[]= {1,-1,0,0};
int dy[]= {0,0,1,-1};

int n,m;
int color[N][N];
string adj[N];

void dfs(int r,int c,int pr,int pc)
{
    color[r][c]=1;

    for(int i=0; i<4; i++)
    {
        int x=r+dx[i];
        int y=c+dy[i];

        //cout<<r<<" "<<c<<" "<<x<<" "<<y<<" "<<color[x][y];nl
        if(x>=0 && y>=0 && x<n && y<m &&  adj[x][y]==adj[r][c])
        {
            if(pr==x && pc==y)
                continue;

            if(!color[x][y])
                dfs(x,y,r,c);

            else if(color[x][y]==1)
            {
                //cout<<r<<" "<<c<<" "<<x<<" "<<y<<" "<<adj[x][y];nl
                pfs("Yes\n");
                exit(0);
            }
        }
    }

    color[r][c]=2;
}

int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;

    sff(n,m);
    for(i=0; i<n; i++)
        cin>>adj[i];

    memset(color,0,sizeof(color));
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(!color[i][j])
                dfs(i,j,-1,-1);
        }
    }

    pfs("No\n");

    return 0;
}
