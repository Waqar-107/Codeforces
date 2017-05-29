/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,string>
#define inf 1000000007
#define dbg cout<<"tttt"<<endl;
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        ll i,j,k;
        ll a,b,c;

        cin>>a>>b>>c;

        if(c==0)
        {
            if(a==b)
                cout<<"YES";
            else
                cout<<"NO";
        }

        else
        {
            if((b-a)%c==0 && (b-a)/c>=0)
                cout<<"YES";
            else
                cout<<"NO";
        }

        return 0;
}
