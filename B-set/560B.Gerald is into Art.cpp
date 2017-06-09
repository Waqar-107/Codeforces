/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define inf 1000000000000
#define fr(a) for(i=0;i<n;i++)

#define mm 1000000007

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    ll i,j,k;
    ll a1,b1;
    ll a2,b2;
    ll a3,b3;

    cin>>a1>>b1;
    cin>>a2>>b2;
    cin>>a3>>b3;

    bool f=false;

    if(a1>=max(a2,a3) && b2+b3<=b1)
        f=true;

    else if(a1>=max(a2,b3) && b2+a3<=b1)
        f=true;

    else if(a1>=max(a3,b2) && b3+a2<=b1)
        f=true;

    else if(a1>=max(b2,b3) && a2+a3<=b1)
        f=true;

    else if(b1>=max(a2,a3) && b2+b3<=a1)
        f=true;

    else if(b1>=max(a2,b3) && b2+a3<=a1)
        f=true;

    else if(b1>=max(a3,b2) && b3+a2<=a1)
        f=true;

    else if(b1>=max(b2,b3) && a2+a3<=a1)
        f=true;


    if(f)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
