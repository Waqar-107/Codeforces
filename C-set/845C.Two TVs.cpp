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
    ll n,m;
    ll x,y;

    scanf("%I64d",&n);

    pp a[n];
    for(i=0;i<n;i++)
    {
        scanf("%I64d%I64d",&x,&y);
        a[i]={x,y};
    }

    sort(a,a+n);

    pp uno={0,0},dos={0,0};

    for(i=0;i<n;i++)
    {
        if(uno.second<a[i].first)
            uno={0,0};

        if(dos.second<a[i].first)
            dos={0,0};

        //try to get one
        if(uno.second==0)
        {
            uno=a[i];
            continue;
        }

        else if(dos.second==0)
        {
            dos=a[i];
        }

        else
        {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";

    return 0;
}

