/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100100
#define inf 10000000000

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
#define pp pair<string,int>

using namespace std;

int main()
{
   // freopen("in.txt", "r", stdin);

    ll i,j,k;
    ll n,m,z;
    ll q,r;

    ll x = inf;
    sffl(n,k);

    //(x%k) can be from 0 to (k-1)
    for(i=k-1;i>0;i--)
    {
        if(n%i==0)
        {
            q=n/i;
            r=i;

            z=k*q+r;
            if((z/k)*(z%k)==n)
                x=min(x,z);
        }
    }

    if(x <inf)
        pfl(x);

    return 0;
}
