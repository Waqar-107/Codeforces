/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1100


#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int x,y;

    map<int,int> mp;

    sf(n);
    for(i=0;i<n;i++)
    {
        sff(x,y);
        mp[x]=max(mp[x],y);
    }

    sf(m);
    for(i=0;i<m;i++)
    {
        sff(x,y);
        mp[x]=max(mp[x],y);
    }

    ll sum=0;
    auto itr=mp.begin();
    while(itr!=mp.end())
    {
        sum+=(ll)itr->second;
        itr++;
    }

    pfl(sum);

    return 0;
}
