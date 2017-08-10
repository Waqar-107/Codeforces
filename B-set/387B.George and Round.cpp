/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<ll,ll>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m,count;

    cin>>n>>m;

    ll a[n],b[m];
    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<m;i++)
        cin>>b[i];


    //find the exacts
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                a[i]=-1,b[j]=-1;break;
            }
        }
    }

    //reduce
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            for(j=0;j<m;j++)
            {
                if(b[j]!=-1 && b[j]>a[i])
                {
                    a[i]=-1;b[j]=-1;break;
                }
            }
        }
    }

    count=0;
    for(i=0;i<n;i++)
    {
        //cout<<a[i]<<" ";
        if(a[i]!=-1)
            count++;
    }

    cout<<count;

    return 0;
}
