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
    ll n,count=0;
    ll sh=0,mo=0;
    string a,b,c,d;
    char ch;

    cin>>n;
    cin>>a>>b;

    c=a;
    d=b;

    sort(c.begin(),c.end());
    sort(d.begin(),d.end());

    //sherlock
    j=0;
    for(i=0;i<n,j<n;)
    {
        if(c[i]<d[j])
        {
            sh++;i++;
        }

        j++;
    }


    //moriarty
    for(i=0;i<n;i++)
    {
        ch=a[i];
        for(j=0;j<n;j++)
        {
            if(d[j]!='$' && d[j]>=ch)
            {
                d[j]='$';count++;break;
            }
        }
    }

cout<<count<<endl;
    mo=n-count;
    cout<<mo<<endl<<sh;


    return 0;
}
