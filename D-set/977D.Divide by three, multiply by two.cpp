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
#define N 200
#define pp pair<ll,ll>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb push_back

using namespace std;

int main()
{
	//freopen("in.txt", "r", stdin);

	ll i,j,k;
	ll n,m;
	set<ll> s;
	map<ll,pp> mp;

	sfl(n);

	ll x[n];
    for(i=0;i<n;i++)
    {
        sfl(x[i]);

        mp[x[i]]={-1,-1};
        s.insert(x[i]);
    }


    set<ll>::iterator itr;
    for(i=0;i<n;i++)
    {
        m=x[i];
        k=m*3;

        itr=s.find(k);

        //3x->x
        if(itr!=s.end())
        {
            mp[m].first=k;
            mp[k].second=m;
        }

        else
        {
            if(x[i]%2)
                continue;

            k=m/2;
            itr=s.find(k);

            if(itr==s.end())
                continue;

            mp[m].first=k;
            mp[k].second=m;
        }
    }

    k=0;
    for(i=0;i<n;i++)
    {
        //cout<<x[i]<<" "<<mp[x[i]].first<<" "<<mp[x[i]].second<<endl;
        if(mp[x[i]].first==-1)
        {
            k=x[i];
           break;
        }
    }

    while(1)
    {
        pfl(k);

        k=mp[k].second;
        if(k==-1)
            break;
    }

	return 0;
}
