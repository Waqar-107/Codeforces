#define _CRT_SECURE_NO_WARNINGS

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

    ll i,j,k;
    ll n,m,c2;
    ll k1,k2;

    sfl(n);sfl(k1);sfl(k2);

    ll x[n],y[n];
    for(i=0;i<n;i++)
        sfl(x[i]);

    for(i=0;i<n;i++)
        sfl(y[i]);

    c2=0;
    priority_queue<ll> v;
    for(i=0;i<n;i++)
        v.push(abs(x[i]-y[i])),c2+=abs(x[i]-y[i]);

    k=k1+k2;

    ll cnt=0;

    if(c2==k)
    {
        printf("0");
        return 0;
    }

    if(k>c2)
    {
        k-=c2;
        if(k%2)
            printf("1");
        else
            printf("0");

        return 0;
    }

    while(k)
    {
        m=v.top();v.pop();

        if(m>0)
        {
            k--;
            m--;v.push(m);c2--;
        }

        if(!c2)
            break;
    }

    while(!v.empty())
    {
        m=v.top();v.pop();
        cnt+=(m*m);
    }

    printf("%I64d",cnt);

    return 0;
}
