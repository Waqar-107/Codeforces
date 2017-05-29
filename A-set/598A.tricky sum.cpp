#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main()
{
        long long int n,nth;
        long long int i,j,k;
        double x, sum1=0,sum2=0,z,t;

        cin>>n;
        long long int a[n];

        for(i=0;i<n;i++)
        {
            cin>>x;

            sum1=((x+1)*x)/2;

            t=floor(log(x*2)/log(2));
            sum2=pow(2,t)-1;

            a[i]=sum1-(2*sum2);

        }

        for(i=0;i<n;i++)
            cout<<a[i]<<endl;

        return 0;
}
