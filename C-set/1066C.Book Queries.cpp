/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 200100
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>
#define mod 1000000007

using namespace std;

struct dat
{
    int l,r;
    int t;

    dat(){}
};

dat a[N];

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int l,r, tot;
    int x,y;
    char ch;

    sf(n);

    l=r=tot=0;
    for(i=0;i<n;i++)
    {
        cin>>ch; sf(m);

        if(ch=='L')
        {
            l++;

            a[m].l=l;
            a[m].t=1;
            a[m].r=tot++;
        }

        else if(ch=='R')
        {
            r++;

            a[m].r=r;
            a[m].t=2;
            a[m].l=tot++;
        }

        else
        {
            //inserted in rightmost
            if(a[m].t==2)
            {
                y=r-a[m].r;
                x=tot-y-1;
            }

            else
            {
                x=l-a[m].l;
                y=tot-x-1;
            }

            pf(min(x,y)); pfs("\n");
        }
    }

    return 0;
}
