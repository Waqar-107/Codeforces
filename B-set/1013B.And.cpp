/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1000100

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    //the answer would be either -1
    //or 0,1,2

    int i,j,k;
    int n,m;

    sff(n,m);

    int a[n];
    map<int,int> mp;

    for(i=0;i<n;i++)
        sf(a[i]), mp[a[i]]++;

    //try for 0
    for(i=0;i<n;i++)
    {
        if(mp[a[i]]>1){
            pfs("0");
            return 0;
        }
    }

    //try for 1
    for(i=0;i<n;i++)
    {
        k=a[i]&m;
        if(((k!=a[i] && mp[k]==1))
        {
            pfs("1");
            return 0;
        }
    }

    //try for 2
    mp.clear();
    for(i=0;i<n;i++)
        a[i]&=m, mp[a[i]]++;

    for(i=0;i<n;i++)
    {
        if(mp[a[i]]>=2)
        {
            pfs("2");
            return 0;
        }
    }

    pfs("-1");

    return 0;
}
