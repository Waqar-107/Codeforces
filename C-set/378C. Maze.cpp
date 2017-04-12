/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define pi 3.1416

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int n,m,k,x=0,d=0;
int vis[500][500];
char s[500][510];

void dfs(int i,int j)
{
    if(d==(x-k) || k==0)
        return;

    if(vis[i][j])
        return;

    if(s[i][j]=='.' && i>=0 && i<n && j>=0 && j<m)
    {
        vis[i][j]=1;d++;

        dfs(i,j+1);
        dfs(i,j-1);
        dfs(i-1,j);
        dfs(i+1,j);
    }

    else
        return;
}

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j;
    int idx,jdx;

    scanf("%d%d%d",&n,&m,&k);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>s[i][j];

            if(s[i][j]=='.')
            {
                x++;
                idx=i;jdx=j;
            }
        }
    }

    memset(vis,0,sizeof(vis));

    dfs(idx,jdx);

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(vis[i][j]==0 && s[i][j]=='.' && k!=0)
                s[i][j]='X';

            printf("%c",s[i][j]);
        }

        printf("\n");
    }

    return 0;
}
