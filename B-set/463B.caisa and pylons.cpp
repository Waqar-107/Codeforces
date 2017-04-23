#include <iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
        long long int i,j,k;
        long long int n,sum=0,max=-1;

        cin>>n;
        long long int h[n+1];
        h[0]=0;

        for(i=1;i<=n;i++)
        {
            cin>>h[i];
        }


        sort(h,h+n+1);

        cout<<h[n];
        return 0;
}
