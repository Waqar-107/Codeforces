/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 110
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

int main()
{
    freopen("in.txt", "r", stdin);

    ll i,j,k;
    ll n,m,a,a2;

    sffl(n,m); sfl(a);

    ll b[n], p[m];
    for(i=0;i<n;i++)
        sfl(b[i]);

    for(i=0;i<m;i++)
        sfl(p[i]);

    sort(b,b+n,greater<ll>());
    sort(p,p+m);

    ll high=min(n,m);
    ll low=0, mid;
    ll r=0, s=0;

    a2=a;
    while(low<=high)
    {
        a=a2;
        mid=(low+high)/2;

        //check if mid bikes are possible to buy

        //see how much help is required
        ll help=0, personal=0;
        j=0;

        for(i=mid-1;i>=0;i--)
        {
            //cout<<b[i]<<" "<<p[j]<<" "<<j;nl
            if(b[i]>=p[j])
                personal+=p[j];
            else
                help+=(p[j]-b[i]), personal+=b[i];

            j++;
        }

        //cout<<mid<<" "<<help<<" "<<personal;nl
        if(help>a)
        {
            //mid bikes are not possible
            high=mid-1;
        }

        else
        {
            if(r<mid)
            {
                a-=help;
                r=mid;
                if(a>=personal)  //a might be greater
                    s=0;
                else
                    s=personal-a;
            }

            low=mid+1;
        }
    }

    pffl(r,s);

    return 0;
}
