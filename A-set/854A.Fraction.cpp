/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m;

    cin>>n;

    for(i=n/2;i>0;i--)
    {
        k=n-i;

        if(__gcd(k,i)==1)
        {
            cout<<i<<" "<<k<<endl;
            break;
        }
    }

    return 0;
}
