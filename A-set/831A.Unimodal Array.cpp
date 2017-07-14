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
    ll n;

    cin>>n;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    //increase, constant, decrease
    if(n==1 || n==2)
    {
        cout<<"YES";
        return 0;
    }


    if(a[0]<a[1])
        k=1;

    else if(a[0]==a[1])
        k=2;

    else
        k=3;

    for(i=2;i<n;i++)
    {
        //increasing
        if(a[i]>a[i-1])
        {
            if(k==1)
                continue;

            else
            {
                cout<<"NO";
                return 0;
            }
        }

        //constant
        else if(a[i]==a[i-1])
        {
            if(k<=2)
            {
                k=2;continue;
            }

            else
            {
                cout<<"NO";
                return 0;
            }
        }

        //decrease
        else
        {
            if(k<=3)
            {
                k=3;continue;
            }

            else
            {
                cout<<"NO";
                return 0;
            }
        }
    }

    cout<<"YES";

    return 0;
}
