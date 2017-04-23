#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
        long long int i,j,k;
        long long int n,x;
        long long int sum=0,sum2=0,sum3=0;

        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
        }

        for(i=0;i<n-1;i++)
        {
            cin>>x;
            sum2+=x;
        }

        for(i=0;i<n-2;i++)
        {
            cin>>x;
            sum3+=x;
        }

        cout<<abs(sum-sum2)<<endl<<abs(sum2-sum3);

        return 0;
}
