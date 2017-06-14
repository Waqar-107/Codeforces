/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int n,m,cnt,t=1;
int vis[1011][1011],turn[1011][1011];
char s[1011][1011];
vector<pp> v;

void dfs(int i,int j)
{
    if(i<=0 || j<=0 || i>n || j>m || vis[i][j]!=0 || s[i-1][j-1]=='*')
        return;

    cnt++;
    vis[i][j]=1;
    v.push_back({i,j});

    dfs(i,j+1);dfs(i,j-1);
    dfs(i+1,j);dfs(i-1,j);
}

int main()
{
    freopen("in.txt","r",stdin);
    int i,j,k;

    scanf("%d%d",&n,&m);

    memset(vis,0,sizeof(vis));
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf(" %c",&s[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j]=='.' && vis[i+1][j+1]==0)
            {
                cnt=0;
                dfs(i+1,j+1);

                for(pp e : v)
                {
                    vis[e.first][e.second]=cnt;
                    turn[e.first][e.second]=t;
                }

                v.clear();t++;
            }
        }
    }

    int idx,jdx;
    int u,l,d,r;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j]=='*')
            {
                idx=i+1;jdx=j+1;

                u=turn[idx-1][jdx];d=turn[idx+1][jdx];
                l=turn[idx][jdx-1];r=turn[idx][jdx+1];

                k=1+vis[idx-1][jdx];

                if(l!=u)
                    k+=vis[idx][jdx-1];

                if(d!=u && d!=l)
                    k+=vis[idx+1][jdx];

                if(r!=u && r!=d && r!=l)
                    k+=vis[idx][jdx+1];

                printf("%d",k%10);
            }

            else
                printf(".");
        }

        printf("\n");
    }


    return 0;
}
