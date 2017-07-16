/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<int,int>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m;
    string s;

    cin>>n>>s;

    k=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='1')
            k++;

        else
        {
            cout<<k;
            k=0;
        }
    }

    cout<<k;

    return 0;
}
