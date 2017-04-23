#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll i,j,k;
    vector<ll> v;
    ll n,n1,n2,x;
    float sum,sum2;

    cin>>n>>n1>>n2;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end(),greater<ll>());

    for(i=0;i<(n-n1-n2);i++)
        v.pop_back();

    vector<ll>::iterator p=v.begin();

    sum=0;
    sum2=0;
    if(n1>n2)
    {
        for(i=0;i<n2;i++)
        {
            sum2+=v[i];
        }

        sum+=(sum2/n2);
        sum2=0;

        for(j=i;j<v.size();j++)
        {
            sum2+=v[j];
        }

        sum+=(sum2/n1);
    }

    else
    {
        for(i=0;i<n1;i++)
        {
            sum2+=v[i];
        }

        sum+=(sum2/n1);
        sum2=0;

        for(j=i;j<v.size();j++)
        {
            sum2+=v[j];
        }
        sum+=(sum2/n2);
    }

    printf("%f",sum);

    return 0;
}
