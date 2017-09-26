#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    ll a,b,f;
    ll x,y,r;
    ll count=0;

    cin>>a>>b>>f>>k;

    x=f;y=a-x;r=b;
    for(i=1;i<=k;i++)
    {
        //from 0 to a
        if(i%2)
        {
            if(r<x){cout<<"-1";return 0;}

            r-=x;
            if(i==k)
            {
                if(r<y)
                    count++,r=b;

                if(r<y){cout<<"-1";return 0;}
            }

            else
            {
                if(2*y>r)
                    count++,r=b;

                if(r<y){cout<<"-1";return 0;}
                r-=y;
            }
        }

        //from a to 0
        else
        {
            if(r<y){cout<<"-1";return 0;}

            r-=y;
            if(i==k)
            {
                if(r<x)
                    count++,r=b;

                if(r<x){cout<<"-1";return 0;}
            }

            else
            {
                if(2*x>r)
                    count++,r=b;

                if(r<x){cout<<"-1";return 0;}
                r-=x;
            }
        }
    }

    cout<<count;

    return 0;
}
