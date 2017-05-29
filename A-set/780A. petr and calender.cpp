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
    int n,m,d;
    int i,j,k;
    int c=0;

    cin>>n>>d;
    m=1;
    int x,y;

    if(n==2)
        x=28;
    else if(n==4 || n==6 || n==9 || n==11)
        x=30;
    else
        x=31;

    while(m<=x)
    {
        if(d==7)
        {
            y=m;
            d=1;
            c++;//cout<<m<<endl;
        }

        else
            d++;

        m++;
    }

    if(y<x)
    {
        c++;//cout<<y<<" "<<x;
    }

    cout<<c;

    return 0;
}
