#include<bits/stdc++.h>
typedef long long int li;
using namespace std;
int main()
{
        li i,j,k;
        li s=0,n;

        cin>>n;
        li a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }

        if(s%2==0)
            cout<<s<<endl;

        else
        {
            sort(a,a+n);
            for(i=0;i<n;i++)
            {
                if((s-a[i])%2==0)
                {
                    cout<<s-a[i]<<endl;
                    break;
                }
            }
        }

        return 0;
}
