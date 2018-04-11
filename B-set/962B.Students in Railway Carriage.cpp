/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150
#define inf 1000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb(n) push_back(n)

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int a,b;
    int x,y;
    char c1,c2;
    string s,t;

    scanf("%d%d%d",&n,&a,&b);
    cin>>s;

    i=0;
    n=s.length();
    while(i<n)
    {
        if(s[i]=='*')
            i++;

        else
        {
            //try to insert the larger if possible
            c1='A';c2='B';

            if(a>0)
                x=1;
            else
                x=0;

            if(b>0)
                y=1;
            else
                y=0;

            if(b>a)
                swap(c1,c2),swap(y,x);

            //if possible set c1
            if(i==0)
            {
                if(x)
                {
                    s[i]=c1;
                    if(c1=='A')a--;
                    else b--;
                }

                else if(y)
                {
                    s[i]=c2;
                    if(c2=='A')a--;
                    else b--;
                }
                
                i++;
            }

            else
            {
                if(s[i-1]!=c1 && x)
                {
                    s[i]=c1;
                    if(c1=='A')a--;
                    else b--;
                }

                else if(s[i-1]!=c2 && y)
                {
                    s[i]=c2;
                    if(c2=='A')a--;
                    else b--;
                }

                i++;
            }
        }
    }

    int cnt=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='A' || s[i]=='B')
            cnt++;
    }

    pf(cnt);

    return 0;
}
