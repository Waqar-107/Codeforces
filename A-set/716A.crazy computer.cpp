#include<bits/stdc++.h>
using namespace std;
int main()
{
        long long int i,j,k;
        long long int n,c,count=0;

        cin>>n>>c;
        long long int a[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        for(i=0;i<n-1;i++)
        {
                if(a[i+1]-a[i]>c)
                    count=0;
                else
                    count++;
        }

        cout<<count+1;

        return 0;
}
