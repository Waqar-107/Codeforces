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
    ll n;

    cin>>n;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    ll add=0,sub=0,step=0,cur;
    for(i=0;i<n;i++)
    {
        cur=(add-sub);

        if(cur==a[i])
            continue;

        else if(cur<a[i])
        {
            add+=(a[i]-cur);
            step+=(a[i]-cur);
        }

        else
        {
            sub+=(cur-a[i]);
            step+=(cur-a[i]);
        }

    }

    cout<<step;

    return 0;
}
