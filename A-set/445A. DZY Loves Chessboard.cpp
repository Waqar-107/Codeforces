#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
        ll i,j,k;
        ll n,m;

        cin>>n>>m;
        char chess[n][m];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>chess[i][j];
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(chess[i][j]=='.')
                {
                    if((i+j)%2==0)
                        chess[i][j]='B';
                    else
                        chess[i][j]='W';
                }
                else
                    continue;
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cout<<chess[i][j];
            }

            cout<<endl;
        }

        return 0;
}
