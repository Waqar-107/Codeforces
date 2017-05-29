#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
        long long int n,count=0;
        long long int i,j,k;

        cin>>n;
        long long int a[n],b[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        b[n-1]=a[n-1];
        for(i=n-2;i>=0;i--)
            {
                b[i]=a[i]+a[i+1];
            }

        for(i=0;i<n;i++)
            cout<<b[i]<<" ";

        return 0;
}
