#include<bits/stdc++.h>
using namespace std;
int main()
{
        long long int i,j,k;
        long long int n,max=-1;

        cin>>n;
        long long int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(i=n-1;i>=0;i--)
        {
            if(a[i]>max)
            {
                max=a[i];
                a[i]=0;
            }

            else
            {
                a[i]=max-a[i]+1;
            }
        }

        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }

        return 0;
}
