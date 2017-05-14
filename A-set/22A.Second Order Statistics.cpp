#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
        int i,j,k;
        int n,flag=0;

        cin>>n;

        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);

        for(i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
            {
                cout<<a[i];
                flag=1;
                break;
            }
        }

        if(flag==0)
            cout<<"NO";

        return 0;
}
