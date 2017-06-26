/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,m,count=0;
    string t;

    stack<ll> s;

    cin>>n;
    n*=2;

    k=0;
    while(n--)
    {
        cin>>t;

        if(t=="add")
        {
            cin>>m;
            s.push(m);
        }

        else
        {
            k++;
            if(s.size()==0)
                continue;

            if(s.top()==k)
                s.pop();

            else
            {
                count++;
                while(s.size())
                    s.pop();
            }
        }
    }

    cout<<count;

    return 0;
}
