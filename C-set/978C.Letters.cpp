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
#define N 200100
#define pp pair<ll,ll>

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
	//freopen("in.txt", "r", stdin);

	int i,j,k;
	int n,m;
	ll x,y;

	sff(n,m);

	ll a[n],b[m];
	vector<ll> v;

	for(i=0;i<n;i++)
        sfl(a[i]);

    for(i=0;i<m;i++)
        sfl(b[i]);

    v.push_back(a[0]);
    for(i=1;i<n;i++)
        v.push_back(v[i-1]+a[i]);

    vector<ll> ::iterator itr;
    for(i=0;i<m;i++)
    {
       itr=lower_bound(v.begin(),v.end(),b[i]);
       x=itr-v.begin();

       //dorm
       printf("%I64d ",x+1);

       //room
       if(x==0)
            printf("%I64d\n",b[i]);
       else
        {
            //cout<<b[i]<<" "<<v[x];nl
            printf("%I64d\n",b[i]-v[x-1]);
        }
    }

	return 0;
}
