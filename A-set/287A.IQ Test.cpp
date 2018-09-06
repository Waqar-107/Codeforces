/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 105
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

int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;

    string a[4];
    for(i=0;i<4;i++)
        cin>>a[i];

    int x,y;
    int mx=4;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            //starts at i,j
            x=0, y=0;
            if(a[i][j]=='#')
                x++;
            else
                y++;

            if(a[i][j+1]=='#')
                x++;
            else
                y++;

            if(a[i+1][j]=='#')
                x++;
            else
                y++;

            if(a[i+1][j+1]=='#')
                x++;
            else
                y++;

            if(!x || !y)
                mx=0;

            if(x==1 || y==1)
                mx=0;
        }
    }

    if(!mx)
        pfs("YES");

    else
        pfs("NO");

    return 0;
}
