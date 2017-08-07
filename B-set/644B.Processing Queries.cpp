/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<ll,ll>

using namespace std;

struct task
{
    ll t,d,f;
};

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll m,n,ct;
    ll t,d,s;

    cin>>n>>m;

    task a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i].t>>a[i].d;
        a[i].f=0;
    }

    queue<ll> q;

    s=0;
    t=a[0].t+a[0].d;a[0].f=t;
    q.push(t);

    for(i=1;i<n;i++)
    {
        while(q.size()>0 && a[i].t>=q.front())
        {
            q.pop();
        }

        if(t<=a[i].t)
        {
            t=a[i].t+a[i].d;a[i].f=t;
            q.push(t);
        }

        else
        {
            if(q.size()>m)
            {
                a[i].f=-1;
            }

            else
            {
                t+=a[i].d;a[i].f=t;
                q.push(t);
            }
        }
    }

    for(i=0;i<n;i++)
        cout<<a[i].f<<" ";

    return 0;
}
