/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100100

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
#define pp pair<ll,ll>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    ll x,y,mx=0,my=0;
    char ch;

    sf(n);
    while(n--)
    {
        cin>>ch;sffl(x,y);
        
        if(x>y)swap(x,y);

        if(ch=='+')
        {
            mx=max(mx,x);
            my=max(my,y);
        }

        else
        {
            if(x>=mx && y>=my)
                pfs("YES\n");
            else if(y>=mx && x>=my)
                pfs("YES\n");
            else
                pfs("NO\n");
        }
    }

    return 0;
}
