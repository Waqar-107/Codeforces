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

    int i,j,k;
    int n,x,sum=0;

    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>k;
        sum+=k;
    }

    sum=abs(sum);

    if(sum==0)
        cout<<"0";

    else if(sum<=x)
        cout<<"1";

    else
    {
        if(sum%x==0)
            cout<<sum/x;
        else
            cout<<(sum/x+1);
    }

    return 0;
}
