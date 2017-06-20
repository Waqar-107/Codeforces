/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<char,ll>
#define dbg printf("in");
#define NL printf("\n");
#define S 210000
#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m;
    ll ss,s;

    cin>>n>>m;

    if(n<m)
    {
        cout<<"-1";
        return 0;
    }

    if(n==m)
    {
        cout<<n;
        return 0;
    }

    if(n%m)
    {
        ss=n/2+1;
        s=n/2;
    }

    else
    {
        ss=n/2;
        s=ss;
    }

    while(s)
    {
        if(ss%m==0)
            break;

        ss++;s--;
    }

    if(ss%m!=0)
        cout<<"-1";
    else
        cout<<ss;

    return 0;
}
