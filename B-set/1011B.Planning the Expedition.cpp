/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s\n",s)

#define pb push_back

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,cnt;

    sff(n,m);

    set<int> s;
    map<int,int> mp;
    map<int,int> bp;

    for(i=0;i<m;i++)
    {
        sf(k);

        s.insert(k);
        mp[k]++;
        bp[k]++;
    }

    int hi=m, lo=0, mid, ans=0;
    while(lo<=hi)
    {
        mid=(hi+lo)/2;

        k=0;
        auto itr=s.begin();
        for(i=1;i<=n;i++)
        {
            if(itr==s.end())
                break;

            if(mp[*itr]>=mid)
                mp[*itr]-=mid, k++;
            else
                itr++, i--;
        }

        mp=bp;

        //try increasing the ans
        if(k==n)
            ans=max(ans,mid), lo=mid+1;
        else
            hi=mid-1;
    }

    pf(ans);

    return 0;
}
