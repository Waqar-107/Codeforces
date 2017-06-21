/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m,len,b;
    string x,y;

    cin>>n;len=0;
    ll o=0,z=0,e=0;
    y="w";

    for(i=0;i<n;i++)
    {
        cin>>x;

        if(x[0]=='0')
        {
            cout<<x;
            return 0;
        }

        z=0;o=0;e=0;
        for(j=0;j<x.length();j++)
        {
            if(x[j]=='0')
                z++;
            else if(x[j]=='1')
                o++;
            else
                e++;
        }


        if(e==0 && o<=1)
            len+=z;
        else
            y=x;
    }

    if(y=="w")
        cout<<"1";
    else
        cout<<y;

    while(len--)
        cout<<"0";

    return 0;
}
