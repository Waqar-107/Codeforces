#define _CRT_SECURE_NO_WARNINGS

/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150
#define inf 100000000000
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
    int n,m,m2;
    ll x,y;
    string s;
    map<string,ll> mp;

    scanf("%d%d%d",&n,&k,&m2);
    string a[n];ll price[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
        sfl(x),mp[a[i]]=x,price[i]=x;

    for(i=0;i<k;i++)
    {
        sf(m);y=inf;vector<int> temp;
        for(j=0;j<m;j++)
        {
            sfl(x);temp.pb(x);
            y=min(y,price[x-1]);
        }

        for(j=0;j<m;j++)
            mp[a[temp[j]-1]]=y;
    }

    ll cnt=0;
    for(i=0;i<m2;i++)
    {
        cin>>s;
        cnt+=mp[s];
    }

    pfl(cnt);

    return 0;
}
