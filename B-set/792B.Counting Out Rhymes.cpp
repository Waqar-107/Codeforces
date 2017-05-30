/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m,t,p;

    cin>>n>>k;

    ll a[k];
    for(i=0; i<k; i++)
        cin>>a[i];

    ll peep[n];
    for(i=0; i<n; i++)
        peep[i]=1;

    i=0;
    m=n;
    p=1;
    while(k)
    {
        t=a[i]%m;

        if(!t)
        {
            cout<<p<<" ";
            peep[p-1]=0;
            m--;p--;

            //leader selection
            while(true)
            {
                p++;
                p=p%n;

                if(peep[p])
                    break;
            }

            //cout<<"lead "<<p<<endl;
            p++;
        }

        while(t)
        {
            p=p%n;

            if(peep[p])
                t--;

            if(!t)
            {
                peep[p]=0;
                cout<<(p+1)<<" ";
                m--;

                //leader selection
                while(true)
                {
                    p++;
                    p=p%n;

                    if(peep[p])
                        break;
                }

            }

            p++;
        }

        i++;
        k--;

    }

    return 0;
}
