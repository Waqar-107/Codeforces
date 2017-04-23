#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
        long long int i,j,k,f,l;
        long long int n,q,count=0;

        scanf("%I64d",&n);
        long long int x[n];
        for(i=0;i<n;i++)
        {
            scanf("%I64d",&x[i]);
        }

        scanf("%I64d",&q);
        long long int m[q];
        for(i=0;i<q;i++)
        {
            scanf("%I64d",&m[i]);
        }

        sort(x,x+n);

        for(i=0;i<q;i++)
        {
                cout<<upper_bound(x,x+n,m[i])-x<<"\n";
        }

        return 0;
}
