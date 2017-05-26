/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll x,n;

    cin>>n;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    ll carry=0;bool f=true;
    for(i=0;i<n;i++)
    {
        if(a[i]%2)
        {
            if(carry)
                carry=0;
            else
                carry=1;
        }

        else
        {
            if(carry && a[i]==0)
            {
                f=false;
                break;
            }
        }
    }

    if(carry>0)
        f=false;

    if(f)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
//490
