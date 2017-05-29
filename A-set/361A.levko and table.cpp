#include<iostream>
using namespace std;
int main()
{
        int n,k;
        int i,j;

        cin>>n>>k;

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==j)
                    cout<<k<<" ";
                else
                    cout<<"0 ";
            }

            cout<<endl;
        }
}
