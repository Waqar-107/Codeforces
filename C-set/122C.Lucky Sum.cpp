#define _CRT_SECURE_NO_WARNINGS

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
#include<sstream>
#include<string>
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 1005
#define inf 100000
#define pp pair<int,int>

using namespace std;

vector<ll> v;
void gen(int level,ll n,int m)
{
    if(level>=10)
        return;

    v.push_back(n+4*m);
    v.push_back(n+7*m);

    gen(level+1,n+4*m,m*10);
    gen(level+1,n+7*m,m*10);
}

int main()
{
    //freopen("in.txt", "r", stdin);

    ll i, j, k;
    ll n,m;
    ll l,r;
    ll x,y;

    cin>>x>>y;

    gen(1,0,1);

    v.push_back(4444444444);
    sort(v.begin(),v.end());

    //get l and r
    n=v.size();
    for(i=0; i<n; i++)
    {
        if(v[i]>=x)
        {
            l=i;
            break;
        }
    }

    for(i=l; i<n; i++)
    {
        if(v[i]>=y)
        {
            r=i;
            break;
        }
    }

    if(l==r)
    {
        ll cnt=(y-x+1)*v[l];
        cout<<cnt;
        return 0;
    }

    ll cnt=(v[l]-x+1)*v[l]+ (y-v[r-1])*v[r];
    for(i=l+1; i<r; i++)
    {
        cnt+=(v[i]-v[i-1])*v[i];
    }

    cout<<cnt;

    return 0;
}
