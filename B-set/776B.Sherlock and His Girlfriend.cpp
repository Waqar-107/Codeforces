/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");

#define inf 1000000000000

bool prime[100005];

void sieve()
{
    memset(prime,1,sizeof(prime));

    prime[0]=prime[1]=0;
    for(int i=4; i<=100005; i+=2)
        prime[i]=0;

    for(int i=3; i<=100005; i+=2)
    {
        if(prime[i])
        {
            for(int j=i*2; j<=100005; j+=i)
            {
                prime[j]=0;
            }
        }
    }
}

using namespace std;

int main()
{
    ll i,j,k;
    ll n;

    cin>>n;

    sieve();

    ll pr=0,npr=0;
    for(i=2; i<=n+1; i++)
    {
        if(prime[i])
            pr++;
        else
            npr++;
    }

    if(npr==0)
        cout<<"1"<<endl;

    else
        cout<<"2"<<endl;

    for(i=2; i<=n+1; i++)
    {
        if(prime[i])
            cout<<"1 ";
        else
            cout<<"2 ";
    }

    return 0;
}
