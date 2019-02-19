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
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    ll i,j,k;
    ll n,m,q;
    ll a,b,x;

    sfl(q);
    while(q--)
    {
        sfl(n);sffl(a,b);

        x=0;
        if(n%2)
            x=a, n--;

        k=n/2;
        x+=min(a*2,b)*k;
        pfl(x);nl;
    }



    return 0;
}
