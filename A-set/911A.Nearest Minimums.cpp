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
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 200
#define inf 10000000000
#define pp pair<char,int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    ll i,j,k;
    ll n,m,r;

    scanf("%I64d",&n);

    ll a[n];m=inf;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
        m=min(m,a[i]);
    }

    vector<ll> v;
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
            v.push_back(i+1);
    }

    k=v.size();m=inf;
    for(i=0;i<k-1;i++)
    {
        m=min(m,v[i+1]-v[i]);
    }

    printf("%I64d",m);

    return 0;
}
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
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 200
#define inf 10000000000
#define pp pair<char,int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    ll i,j,k;
    ll n,m,r;

    scanf("%I64d",&n);

    ll a[n];m=inf;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
        m=min(m,a[i]);
    }

    vector<ll> v;
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
            v.push_back(i+1);
    }

    k=v.size();m=inf;
    for(i=0;i<k-1;i++)
    {
        m=min(m,v[i+1]-v[i]);
    }

    printf("%I64d",m);

    return 0;
}
