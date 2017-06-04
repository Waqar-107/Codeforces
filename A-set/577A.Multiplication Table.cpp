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
    int n,m,p;

    cin>>n>>m;

    int count=0;
    for(i=1;i<=n;i++)
    {
        if(m%i==0)
        {
            p=m/i;
            if(p<=n)
                count++;
        }
    }

    cout<<count;

    return 0;
}
