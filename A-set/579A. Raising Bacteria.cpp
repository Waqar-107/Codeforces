#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll x,count=0;
    cin>>x;

    while(x/2!=0)
    {
        if(x%2==1)
            count++;

        x=x/2;
    }

    cout<<count+1;

    return 0;
}
