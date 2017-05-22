/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");
#define pi 3.1416

#define Size 100010
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
    ll x,y,n;
    ll ox,oy;
    ll f,s;

    cin>>n;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    while(true)
    {
        ox=-1,oy=-1;
        x=0;y=1;

        for(i=0;i<n,y<n;i++)
        {
            //need to swap
            if(a[x]>a[y])
            {
                if(x-oy>1 && oy!=-1)
                    break;

                else
                {
                    if(ox==-1)
                        f=x;

                    swap(a[x],a[y]);
                    ox=x;oy=y;
                    x+=2;y+=2;
                }
            }

            else
                x++,y++;
        }

        if(ox==-1 && oy==-1)
            break;
        else
            cout<<f+1<<" "<<oy+1<<endl;
    }


    return 0;
}
