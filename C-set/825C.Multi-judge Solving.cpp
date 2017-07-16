/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<int,int>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m,req;

    cin>>n>>m;

    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    ll count=0;
    for(i=0;i<n;i++)
    {
        req=(a[i]%2)+(a[i]/2);

        if(m>=req)
        {
            m=max(m,a[i]);
        }

        else
        {
            while(req>m)
            {
                count++;
                m*=2;
            }

             m=max(m,a[i]);
        }
    }

    cout<<count;

    return 0;
}
