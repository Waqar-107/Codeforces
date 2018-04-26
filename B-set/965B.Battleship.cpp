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
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 300
#define inf 1000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb push_back

using namespace std;

int n,m;
stack<pp> stk;
int calc[N][N];
char s[N][N];

bool inside(int r,int c)
{
    if(r>=0 && c>=0 && r<n && c<n)
        return true;

    return false;
}

void clr()
{
    while(!stk.empty())
        stk.pop();
}

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int u,v;
    int x,y;

    memset(calc,0,sizeof(calc));

    sff(n,k);
    for(i=0;i<n;i++)
        scanf("%s",s[i]);

    pp ans={1,1}, p;

    for(i=0;i<n;i++)
    {
        //starting from this cell
        //can get 2 ways: down or right

        for(j=0;j<n;j++)
        {
            if(s[i][j]=='#')
                continue;

            clr();
            //rightward
            for(x=j+1;x<n;x++)
            {
                if(stk.size()==k-1)
                    break;

                if(inside(i,x) && s[i][x]=='.')
                    stk.push({i,x});
                else
                    break;
            }

            if(stk.size()>=k-1)
            {
                calc[i][j]++;
                while(stk.size())
                {
                    p=stk.top();stk.pop();
                    calc[p.first][p.second]++;
                }
            }

            //down
            clr();
            for(x=i+1;x<n;x++)
            {
                if(stk.size()==k-1)
                    break;

                if(inside(x,j) && s[x][j]=='.')
                    stk.push({x,j});
                else
                    break;
            }

            if(stk.size()>=k-1)
            {
                calc[i][j]++;
                while(stk.size())
                {
                    p=stk.top();stk.pop();
                    calc[p.first][p.second]++;
                }
            }
        }
    }

    m=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(m<calc[i][j])
                m=calc[i][j], ans={i+1,j+1};
        }
    }

    printf("%d %d\n",ans.first,ans.second);

    return 0;
}
