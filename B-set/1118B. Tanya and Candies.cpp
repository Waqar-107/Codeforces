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

    sf(n);

    int a[n];
    for(i=0;i<n;i++)sf(a[i]);

    pp x[n], y[n];
    ll odd, even;

    //normal
    odd =0, even = 0;
    for(i=0;i<n;i++)
    {
        x[i]={even,odd};

        if((i+1)%2)
            odd+=(ll)a[i];
        else
            even+=(ll)a[i];
    }

    //ulta
    odd =0, even = 0;
    for(i=n-1;i>=0;i--)
    {
        y[i]={even,odd};

        if((i+1)%2)
            odd+=(ll)a[i];
        else
            even+=(ll)a[i];
    }

    int cnt=0;

    //1st
    if(y[0].first == y[0].second)
        cnt++;

    //last
    if(n>1 && x[n-1].first==x[n-1].second)
        cnt++;

    for(i=1;i<n-1;i++)
    {
        /*cout<<i;nl;
        cout<<x[i].first<<" "<<x[i].second;nl;
        cout<<y[i].first<<" "<<y[i].second;nl;*/
        //if ith is selected
        even = x[i].first+y[i].second;
        odd = x[i].second+y[i].first;

        if(even==odd)
            cnt++;
    }

    pf(cnt);

    return 0;
}
