/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,x,m;

    cin>>n>>k;

    m=pow(2,n-1);

    while(m!=k)
    {
        if(k>m)
        {
            j=k-m;
            k=m-j;
        }

        n--;
        m=pow(2,n-1);
    }

    cout<<n;

    return 0;
}
