/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,sum;

    cin>>n>>k;

    set<ll> v;
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            v.insert(i);
            v.insert(n/i);
        }
    }

    if(v.size()<k)
        cout<<"-1";

    else
    {
        set<ll>:: iterator p=v.begin();
        j=1;

        while(1)
        {
            if(j==k)
            {
                cout<<*p;
                break;
            }p++;j++;
        }

    }

    return 0;
}
