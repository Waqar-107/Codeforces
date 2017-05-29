#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,m;
        int max,min;

        cin>>n>>m;

        if(n==0 && m!=0)
        {
            cout<<"Impossible"<<endl;
            return 0;
        }

        else if(n==0 && m==0)
        {
            cout<<"0 "<<"0"<<endl;
        }

        else if(m==0 && n!=0)
        {
            cout<<n<<" "<<n<<endl;
            return 0;
        }

        else
        {
             if(m>n)
             {
                 max=m+n-1;
                 min=(n-1)+(m-n)+1;
             }

             else if(m==n)
             {
                 max=m+n-1;
                 min=m;
             }

             else
             {
                 max=m+n-1;
                 min=m+n-m;
             }

             cout<<min<<" "<<max<<endl;
        }

        return 0;
}
