/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define dbg printf("xxxx");

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    ll i,j,k;
    ll n,count=0;
    string a,b;

    cin>>a>>k;

    for(i=a.length()-1;i>=0;i--)
    {
        if(k<=0)
            break;

       if(a[i]=='0')
            k--;

        else
            count++;

//cout<<k<<"  "<<count<<endl;
    }

    if(k<=0)
        cout<<count;
    else
        cout<<(a.length()-1);


    return 0;
}
