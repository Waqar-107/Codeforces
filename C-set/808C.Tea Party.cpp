/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
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
    ll n,w,x;

    cin>>n>>w;
    pp a[n];
    ll t[n];

    for(i=0;i<n;i++)
    {
        cin>>x;
        a[i]={x,i};

        if(x%2)
            t[i]=x/2+1,w-=t[i];
        else
            t[i]=x/2,w-=t[i];
    }

    if(w>=0)
    {
        ll lagbe;
        sort(a,a+n);

        //given as required
        for(i=1;i<n;i++)
        {
            if(t[a[i].second]<t[a[i-1].second])
            {
                lagbe=t[a[i-1].second]-t[a[i].second];

                if(w<lagbe)
                {
                    cout<<"-1";
                    return 0;
                }

                w-=lagbe;
                t[a[i].second]+=lagbe;
            }
        }

        //distributing the extra
        i=n-1;
        while(w && i>=0)
        {
            lagbe=a[i].first-t[a[i].second];

            if(lagbe<0)
                i--;
            else
            {
                if(w>lagbe)
                {
                    t[a[i].second]+=lagbe;w-=lagbe;i--;
                }

                else
                {
                    t[a[i].second]+=w;break;
                }
            }
        }
    }

    else
    {
        cout<<"-1";
        return 0;
    }


    for(i=0;i<n;i++)
        cout<<t[i]<<" ";

    return 0;
}
