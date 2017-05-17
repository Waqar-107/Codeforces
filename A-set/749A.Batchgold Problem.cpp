/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
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
    ll n,w,q;

    cin>>n;

    if(n%2)
    {
        if(n==3)
        {
            cout<<"1"<<endl<<"3";
        }

        else
        {
            n-=3;
             cout<<(n/2)+1<<endl;
            for(i=0;i<n/2;i++)
                cout<<"2 ";

            cout<<"3";
        }

    }

    else
    {
        cout<<n/2<<endl;
        for(i=0;i<n/2;i++)
            cout<<"2 ";
    }

    return 0;
}
