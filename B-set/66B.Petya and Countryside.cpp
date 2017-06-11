/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define inf 1000000000000
#define fr(a) for(i=0;i<n;i++)

#define mm 1000000007

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int i,j,k;
    int n,r,l;

    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    int count,max=0;
    for(i=0;i<n;i++)
    {
        count=1;

        k=i;
        for(j=i-1;j>=0;j--)
        {
            if(a[j]<=a[k])
                count++;
            else
                break;

            k--;
        }

        k=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<=a[k])
                count++;
            else
                break;

            k++;
        }

        if(max<count)
            max=count;

    }

    cout<<max;

    return 0;
}
