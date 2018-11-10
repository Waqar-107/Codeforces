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
#include<string>
#include<unordered_set>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 1010
#define inf 1e18

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int dx[]={1,-1,0,0,1,1,-1,-1};
int dy[]={0,0,1,-1,1,-1,-1,1};

int n;
int a[N][N];

void dfs(int r,int c)
{
    a[r][c]=2;
    for(int i=0;i<8;i++)
    {
        int x=dx[i]+r;
        int y=dy[i]+c;
        
        if(x>0 && y>0 && x<=n && y<=n && !a[x][y])
            dfs(x,y);
    }
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i,j,k;
	int m;
	int ax,bx,cx;
	int ay,by,cy;

	sf(n);
	sff(ax,ay); sff(bx,by);sff(cx,cy);
	
	memset(a,1,sizeof(0));
	
	for(i=1;i<=n;i++)
	    a[i][ay]=1, a[ax][i]=1;
	
	i=ax, j=ay;
	while(i<n && j<n)
	{
	    a[i][j]=1;
	    i++;j++;
	}
	
	i=ax, j=ay;
	while(i>0 && j<n)
	{
	    a[i][j]=1;
	    i--;j++;
	}
	
	i=ax, j=ay;
	while(i<n && j>0)
	{
	    a[i][j]=1;
	    i++;j--;
	}
	
	i=ax, j=ay;
	while(i>0 && j>0)
	{
	    a[i][j]=1;
	    i--;j--;
	}
	
	dfs(bx,by);
	
	if(a[cx][cy]==2)
	    pfs("YES\n");
	
	else
	    pfs("NO\n");
	
	return 0;
}
