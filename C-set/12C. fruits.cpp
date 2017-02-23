/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("xxxx");
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

struct ff
{
    ll q;string name;
    ff(string n, ll qn)
    {
        name=n;
        q=qn;
    }
};

bool operator<(ff a, ff b)
{
    return a.q<b.q;
}

int main()
{
freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,m;
    string s;
    priority_queue<ff> pq; priority_queue<ff> pqr;

    cin>>n>>m;
    ll a[n];
    map<string,ll> fruits;

    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<m;i++)
    {
        cin>>s;
        fruits[s]++;
    }

    map<string,ll>::iterator p=fruits.begin();
    while(p!=fruits.end())
    {
        //cout<<p->first<<" "<<p->second<<endl;
        pq.push(ff(p->first,p->second));
        pqr.push(ff(p->first,p->second));
        p++;
    }

    sort(a,a+n);

    ll max=0, min=0;

    i=0;
    while(!pq.empty() && i<n)
    {
        min+=pq.top().q*a[i];
        i++;pq.pop();
    }

    i=n-1;
    while(!pqr.empty() && i>=0)
    {
        max+=pqr.top().q*a[i];
        i--;pqr.pop();
    }

    cout<<min<<" "<<max;

    return 0;

}

