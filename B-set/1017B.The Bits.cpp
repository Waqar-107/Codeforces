/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 200100


#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

bool cmp(pp a , pp b)
{
    if(a.second==b.second)
        return a.first<b.first;

    return  a.second>b.second;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    sf(n);

    string as,bs;
    cin>>as>>bs;

    ll ans=0;
    int bz=0, az=0,ao=0;

    for(i=0;i<n;i++)
    {
        if(as[i]=='0')
            az++;
        else
            ao++;

        if(bs[i]=='0' && as[i]=='0')
            bz++;
    }

    for(i=0;i<n;i++)
    {
        if(bs[i]=='0')
        {
            if(as[i]=='0')
                ans+=ao;
            else
                ans+=(az-bz);
        }
    }

    pfl(ans);

    return 0;
}
