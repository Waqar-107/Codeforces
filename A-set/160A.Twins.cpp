#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
        int i,j,k;
        int n;
        int sum=0,count=0,sum2=0;

        cin>>n;
        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        sort(a,a+n);

        for(i=n-1;i>=0;i--)
        {
                sum2=sum2+a[i];
                sum-=a[i];
                count++;
                if(sum2>sum)
                    break;
        }

        cout<<count;

        return 0;
}
