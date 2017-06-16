/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,b,m;

    deque<ll> q;
    cin>>n>>b;

    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i],q.push_back(a[i]);


    if(n==b)
    {
        cout<<a[n-1];
        return 0;
    }

    //keeping the large balls in a single box if possible
    ll ex=b*2-n;m=0;
    while(ex && n>0)
    {
        m=max(q.back(),m);
        q.pop_back();
        ex--;n--;
    }

    n--;i=0;
    while(i<n)
    {
        j=a[i]+a[n];i++;n--;
        m=max(m,j);
    }

    cout<<m;

    return 0;
}
