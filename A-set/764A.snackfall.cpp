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

int main()
{
    freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n;
    priority_queue<ll> pq;

    cin>>n;
    ll a[n],b[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }

    sort(b,b+n,greater<ll>());

    ll d=0;
    for(i=0;i<n;i++)
    {
       if(a[i]==b[d])
       {
           cout<<b[d]<<" ";d++;
           while(!pq.empty() && pq.top()==b[d])
           {
               cout<<b[d]<<" ";d++;pq.pop();
           }

           cout<<endl;
       }

       else
       {
           cout<<endl;
           pq.push(a[i]);
       }
    }


    return 0;
}
