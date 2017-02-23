/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define dbg printf("xxxx");
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
    ll m,t,r;
    ll d,lg;
    ll count=0;

    cin>>m>>d>>r;
    ll w[m];

    for(i=0;i<m;i++)
        cin>>w[i];


    //if the total number of candles are greater than their lifetime then it is not possible
    //to light up r candles.
    if(r>d)
    {
        cout<<"-1";
        return 0;
    }


    ll candle[r];

    j=1;
    for(i=r-1;i>=0;i--,j++)
        candle[i]=w[0]-j;

     /*for(i=0;i<r;i++)
            cout<<candle[i]<<endl;*/


    count=r;
    for(i=0;i<m;i++)
    {
        k=1;
        for(j=r-1;j>=0;j--)
        {
            if(w[i]-candle[j]>d )
            {
                candle[j]=w[i]-k;

                if(candle[j]+d<w[i] || (j+1<r && candle[j]==candle[j+1]))
                {
                    cout<<"-1";return 0;
                }

                count++;
                k++;
            }
        }
    }

    cout<<count;

    return 0;
}
