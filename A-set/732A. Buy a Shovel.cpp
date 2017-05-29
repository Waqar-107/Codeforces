#include<bits/stdc++.h>
typedef long long int ll;
#define pair<ll,ll> pii
using namespace std;
int main()
{
        ll i,j,k;
        ll n,r;

        cin>>k>>r;
        for(i=1;;i++)
        {
            if((k*i)%10==r || (k*i)%10==0)
            {
                cout<<i<<endl;
                break;
            }
        }

        return 0;
}
