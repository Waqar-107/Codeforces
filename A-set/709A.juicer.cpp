#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;
int main()
{
        long long int i,j,k;
        long long int sum=0,count=0;
        long long int n,b,d;

        cin>>n>>b>>d;

        long long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];

        for(i=0;i<n;i++)
        {
                if(a[i]>b)
                    continue;

                sum+=a[i];

                if(sum>d)
                {
                    sum=0;
                    count++;
                }
        }

        cout<<count;

        return 0;
}
