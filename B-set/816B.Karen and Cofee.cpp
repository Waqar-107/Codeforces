/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");
#define S 200001
#define inf 1000000000000

using namespace std;

ll block;
struct query
{
    ll a,b,i;

    query(){}
    query(ll x,ll y,ll j)
    {
        a=x;b=y;i=j;
    }
};
bool cmp(query a, query b)
{
    if(a.a/block!=b.a/block)
        return a.a<b.a;

    return a.b<b.b;
}

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,l,r;
    ll q;

    ll a[S];
    memset(a,0,sizeof(a));

    cin>>n>>k>>q;

    for(i=0;i<n;i++)
        cin>>l>>r,a[l]++,a[r+1]--;

    for(i=1;i<S;i++)
        a[i]+=a[i-1];

    //-------------------------------------------------Mo's algorithm
    struct query x[q];
    for(i=0;i<q;i++)
    {
        cin>>l>>r;
        x[i]=query(l,r,i);
    }

    block=sqrt(q);
    sort(x,x+q,cmp);

    ll sum=0;

    for(i=x[0].a;i<=x[0].b;i++)
    {
        if(k<=a[i])
            sum++;
    }

    pp ff[q];
    ff[0].first=x[0].i;ff[0].second=sum;

    l=x[0].a;r=x[0].b;

    for(i=1;i<q;i++)
    {
        //sub
        if(x[i].a>l)
        {
            while(l<x[i].a)
            {
                if(a[l]>=k)
                    sum--;

                l++;
            }
        }

        //add
        else if(x[i].a<l)
        {
            l--;
            while(x[i].a<=l)
            {
                if(a[l]>=k)
                    sum++;

                l--;
            }
        }

        //add
        if(x[i].b>r)
        {
            r++;
            while(r<=x[i].b)
            {
                if(a[r]>=k)
                    sum++;
                r++;
            }
        }

        //sub
        else if(x[i].b<r)
        {
            while(x[i].b<r)
            {
                if(a[r]>=k)
                    sum--;

                r--;
            }
        }

        ff[i]={x[i].i,sum};
        l=x[i].a;r=x[i].b;
    }

    sort(ff,ff+q);

    for(i=0;i<q;i++)
        cout<<ff[i].second<<endl;

    //-------------------------------------------------Mo's algorithm

    return 0;
}
