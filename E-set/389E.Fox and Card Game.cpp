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
    int ciel,jiro;

    cin>>n;
    vector<int> v;

    ciel=0,jiro=0;
    for(i=0; i<n; i++)
    {
        cin>>m;

        if(m%2==0)
        {
            for(j=0; j<m/2; j++)
                cin>>k,ciel+=k;
            for(j=0; j<m/2; j++)
                cin>>k,jiro+=k;
        }

        else
        {
            for(j=0; j<m/2; j++)
                cin>>k,ciel+=k;

            cin>>k;
            v.push_back(k);

            for(j=0; j<m/2; j++)
                cin>>k,jiro+=k;
        }
    }

    sort(v.begin(),v.end(),greater<int>());
    for(i=0;i<v.size();i++)
    {
        if(i%2)
            jiro+=v[i];
        else
            ciel+=v[i];
    }

    cout<<ciel<<" "<<jiro;

    return 0;
}
