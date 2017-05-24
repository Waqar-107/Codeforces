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
    ll n,m,sum=0;

    cin>>n;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i],sum+=a[i];

    if(n==2)
    {
        if(a[0]==a[1])
            cout<<"1";
        else
            cout<<"0";

        return 0;
    }

    if(n==1)
    {
        cout<<"0";
        return 0;
    }

    ll s1=0,s2=0;
    i=0,j=n-1;

    ll count=0;
    while(i<j)
    {

        if(n%2==0 && i==(j-1))
        {
            s1+=a[i];
            s2+=a[j];

            if(s2==s1)
                count++;

            break;
        }

        s1+=a[i];
        s2+=a[j];

        //cout<<s1<<" "<<s2<<" "<<sum-s2<<" "<<sum-s1<<endl;

        if((sum-s2)==s2)
            count++;

        if((sum-s1)==s1)
            count++;

        i++;j--;

    }

    if((s1+a[i])==s2 && i==j)
        count++;

    if((s2+a[j])==s1 && i==j)
        count++;

    cout<<count;

    return 0;
}
