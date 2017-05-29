/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        //freopen("in.txt","r",stdin);

        ll i,j,k;
        ll n,count=0;

        cin>>n;
        string a,b;

        for(i=0;i<n;i++)
        {
            if((i+1)%2==1)
            {
                a.push_back('C');
                b.push_back('.');
            }

            else
            {
                a.push_back('.');
                b.push_back('C');
            }
        }

        if(n%2==0)
            cout<<(n*n)/2<<endl;

        else
        {
            cout<<((((n/2)+1)*(n/2+1))+((n/2)*(n/2)))<<endl;
        }


        for(i=0;i<n;i++)
        {
            if((i+1)%2)
                cout<<a<<endl;
            else
                cout<<b<<endl;
        }

        return 0;
}
