/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define N 55

using namespace std;

struct lake
{
    int i,j,c;
    lake(int a,int b,int v)
    {
        i=a;j=b;c=v;
    }
};

int n,m;
bool vis[N][N];
string s[N];
vector<lake> v;

bool cmp(lake a,lake b)
{
    return a.c<b.c;
}

void ocean(int i,int j)
{
    if(vis[i][j] || i<0 || j<0 || i>=n || j>=m || s[i][j]=='*')
        return;

    vis[i][j]=1;

    ocean(i+1,j);ocean(i-1,j);
    ocean(i,j+1);ocean(i,j-1);
}

int lakeDetector(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return 0;

    vis[i][j]=1;
    int count=1;

    if(!vis[i+1][j] && s[i+1][j]=='.')
        count+=lakeDetector(i+1,j);

    if(!vis[i-1][j] && s[i-1][j]=='.')
        count+=lakeDetector(i-1,j);

    if(!vis[i][j+1] && s[i][j+1]=='.')
        count+=lakeDetector(i,j+1);

    if(!vis[i][j-1] && s[i][j-1]=='.')
        count+=lakeDetector(i,j-1);

    return count;
}

void earthFiller(int i,int j)
{
    if(vis[i][j] || i<0 || j<0 || i>=n || j>=m || s[i][j]=='*')
        return;

    vis[i][j]=1;
    s[i][j]='*';

    earthFiller(i+1,j);earthFiller(i-1,j);
    earthFiller(i,j+1);earthFiller(i,j-1);
}

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int x,cnt=0;

    scanf("%d%d%d",&n,&m,&k);

    for(i=0;i<n;i++)
        cin>>s[i];

   //first take out the oceans
   memset(vis,0,sizeof(vis));
   for(i=0;i<m;i++)
   {
       if(!vis[0][i] && s[0][i]=='.')
        ocean(0,i);
   }

   for(i=0;i<m;i++)
   {
       if(!vis[n-1][i] && s[n-1][i]=='.')
        ocean(n-1,i);
   }

   for(i=0;i<n;i++)
   {
       if(!vis[i][m-1] && s[i][m-1]=='.')
        ocean(i,m-1);
   }

   for(i=0;i<n;i++)
   {
       if(!vis[i][0] && s[i][0]=='.')
        ocean(i,0);
   }

    //detect lakes
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(!vis[i][j] && s[i][j]=='.')
            {
                x=lakeDetector(i,j);
                v.push_back(lake(i,j,x));
            }
        }
    }

    sort(v.begin(),v.end(),cmp);

    memset(vis,0,sizeof(vis));
    for(i=0;i<v.size()-k;i++)
    {
        cnt+=v[i].c;
        earthFiller(v[i].i,v[i].j);
    }

    printf("%d\n",cnt);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cout<<s[i][j];

        printf("\n");
    }

    return 0;
}
