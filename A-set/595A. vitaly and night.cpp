#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,m;
        int count=0;
        int i,j,k;

        cin>>n>>m;
        int a[n][2*m];

        for(i=0;i<n;i++)
        {
            for(j=0;j<2*m;j++)
            {
                cin>>a[i][j];
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<2*m;j+=2)
            {
                if(a[i][j]==0 && a[i][j+1]==0)
                    continue;
                else
                    count++;
            }
        }

        cout<<count<<endl;

        return 0;
}
