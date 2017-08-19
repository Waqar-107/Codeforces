/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define N 50

using namespace std;

struct data
{
    ll d,i,x;
};

bool cmp(data a, data b)
{
    if(a.d==b.d)
        return a.i>b.i;

    return a.d<b.d;
}

bool cmp2(data a,data b)
{
    return a.i<b.i;
}

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m;

    cin>>n;

    ll a[n];
    data b[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
    {
        cin>>b[i].d;
        b[i].i=i;
    }

    sort(a,a+n,greater<ll>());
    sort(b,b+n,cmp);

    for(i=0;i<n;i++)
    {
        b[i].x=a[i];
    }

    sort(b,b+n,cmp2);

    for(i=0;i<n;i++)
        cout<<b[i].x<<" ";

    return 0;
}
