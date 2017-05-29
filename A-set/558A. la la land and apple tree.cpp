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
    ll n,x,q;
    ll neg=0,pos=0,sum=0,max=-1;
    ll idx=0;

    cin>>n;
    pp a[n+1];

    for(i=0;i<n;i++)
    {
        cin>>x>>q;
        a[i]=make_pair(x,q);

        if(x<0)
            neg++;
        else
            pos++;
    }

    a[n]=make_pair(0,0);

    n++;
    sort(a,a+n);


    idx=neg;
    //left- left+1==right
    if(neg>pos)
    {
        for(i=idx;i<n;i++)
            sum+=a[i].second;

        i=idx-1;q=pos+1;
        while(q>0 && i>=0)
        {
            sum+=a[i].second;
            q--;i--;
        }
    }

    else
    {
        for(i=0;i<idx;i++)
            sum+=a[i].second;

        i=idx+1;q=neg-1;
        while(q>0 && i<n)
        {
            sum+=a[i].second;
            q--;i++;
        }
    }

    max=sum;sum=0;


    //right
    if(neg>pos)
    {
        for(i=idx;i<pos;i++)
            sum+=a[i].second;

        i=idx-1;q=pos;
        while(q>0 && i>=0)
        {
            sum+=a[i].second;
            q--;i--;
        }
    }

    //right-left=1
    else
    {
        for(i=0;i<idx;i++)
            sum+=a[i].second;

        i=idx+1;q=neg+1;
        while(q>0 && i<n)
        {
            sum+=a[i].second;
            q--;i++;
        }
    }

    if(sum>max)
        max=sum;

    cout<<max;

    return 0;
}
