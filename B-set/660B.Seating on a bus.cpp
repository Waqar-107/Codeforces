#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
        int i,j,k;
        int n,m;

        cin>>n>>m;

        int a[n][4];
        //initialize
        for(i=0;i<n;i++)
        {
            for(j=0;j<4;j++)
            {
                a[i][j]=0;
            }
        }

        k=1;
        //entering window seats
        for(i=0;i<n;i++)
        {
                if(k<=m)
                {
                    a[i][0]=k;
                    k++;
                }

                 if(k<=m)
                {
                    a[i][3]=k;
                    k++;
                }

        }
        //entering non-window seats
        for(i=0;i<n;i++)
        {
                if(k<=m)
                {
                    a[i][1]=k;
                    k++;
                }

                 if(k<=m)
                {
                    a[i][2]=k;
                    k++;
                }

        }

        //getting off
        for(i=0;i<n;i++)
        {
                if(a[i][1]!=0)
                    cout<<a[i][1]<<" ";
                if(a[i][0]!=0)
                    cout<<a[i][0]<<" ";
                if(a[i][2]!=0)
                    cout<<a[i][2]<<" ";
                if(a[i][3]!=0)
                    cout<<a[i][3]<<" ";
        }

        return 0;
}
