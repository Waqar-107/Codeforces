/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

bool prime[1000001];

void sieve()
{
    memset(prime,1,sizeof(prime));

    prime[0]=prime[1]=0;
    for(int i=4;i<=1000001;i+=2)
        prime[i]=0;

    for(int i=3;i<=1000001;i+=2)
    {
        if(prime[i])
        {
            for(int j=i*2;j<=1000001;j+=i)
            {
                prime[j]=0;
            }
        }
    }
}

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n;double a;

    sieve();
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        a=sqrt(a);

        if(a==floor(a))
        {
            //cout<<a<<"  "<<prime[(ll)a]<<endl;
            if(prime[(ll)a])
                printf("YES\n");
            else
                printf("NO\n");
        }

        else
            printf("NO\n");
    }


    return 0;
}
