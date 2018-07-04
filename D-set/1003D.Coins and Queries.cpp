/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150
#define inf 1000000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d\n",n)
#define pfs(s) printf("%s\n",s)

#define pb push_back

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    ll x,y,cnt;
    map<ll,int> mp;
    map<ll,int> used;

    sff(n,m);
    for(i=0;i<n;i++)
    {
        sfl(x);
        mp[x]++;
    }

    auto itr=mp.begin();
    vector<ll> v;

    while(itr!=mp.end())
    {
        v.push_back(itr->first);
        itr++;
    }

    while(m--)
    {
        itr=mp.begin();
        while(itr!=mp.end())
        {
            used[itr->first]=0;
            itr++;
        }

        sfl(x);

        //try making x using the coins
        // 30-35 iterations at-most

        cnt=0;
        n=v.size();
        for(i=n-1;i>=0;i--)
        {
            //check how many of v[i] can you take
            y=x/v[i];

            if(mp[v[i]]>y){
                //use y
                x-=y*v[i];
                cnt+=y;
            }

            else{
                //use all of em
                x-=mp[v[i]]*v[i];
                cnt+=mp[v[i]];
            }
        }

        if(!x)
            pfl(cnt);
        else
            pfs("-1");
    }

    return 0;
}
