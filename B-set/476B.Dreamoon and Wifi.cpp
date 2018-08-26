/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 10010
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int x,y,z, cnt;

void solve(int n,int m)
{
    if(m==0)
    {
        if(n==x)
            cnt++;

        return;
    }

    solve(n+1,m-1);
    solve(n-1,m-1);
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    string s;

    cin>>s;

    x=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='+')
            x++;
        else
            x--;
    }

    cin>>s;

    y=0;z=0;
    for(i=0;i<s.length();i++)
    {
         if(s[i]=='+')
            y++;
        else if(s[i]=='-')
            y--;
        else
            z++;
    }

    solve(y,z);
    float ans=(1.0/pow(2,z))*cnt;

    printf("%.15f",ans);

    return 0;
}
